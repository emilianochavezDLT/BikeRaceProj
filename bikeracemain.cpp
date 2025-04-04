//Program Created by: Emiliano Chavez De La Torre
#include <iostream>
#include "organization/organization.h"
#include "race/race.h"
#include "validationFunctions/checkingUserInput.h"
#include "validationFunctions/validateUserDecision.h"
#include <string>
#include <array>


int main(){

    /**
     * First we are going to start off by creating a Race Object
     * 
     * Why?
     * The reason for this is that we can only have one Race.
     * There is only one Race but we can have many Organizations, Registrants, and
     * Jerseys.
     * 
     */
    
    //Lets ask if the user is ready to create a Race
    bool user_decision = false; //This varaible will be used to catch the return of validateString()
    std::string from_user; 
    std::array <std::string, 6> arr_yn= {"Y", "y", "N", "n", "Q", "q"}; 

    std::cout << "Ready to create a Race?" << std::endl;
    std::cout << "(Y)es or (N)o, keep it to one character. Enter (Q) to quit " << std::endl;

    while(user_decision == false){
        bool is_string_size_valid, yn_char_valid = false;
        std::cin >> from_user;

        //This ensures that the string size of Valid
        //We only one character within the user input
        is_string_size_valid = check_user_input::checking_user_input(from_user);
        
        //Now, if the size is valid then check if the character is yes, no, or quit.
        if(is_string_size_valid == true){
            yn_char_valid = valid_user_decision::validate_user_decision(arr_yn, from_user); //Returns True or False
            //If the string is in the array
            if(yn_char_valid == true){
                //Also check if the string is a Q? If it is then Break out of the loop
                if(from_user == "Q" || from_user == "q"){
                    std::cout << "Thank you" << std::endl;
                    break;
                }
                //Then the string is good and change the user_decision to True
                else{
                    user_decision = true;
                }
            }
        }
        //This means that string size in not valid
        else{
            std::cout << "Rerun the program and try again." << std::endl;
            break;
        }

    }
    
    //End of main
    return 0;

        
}
