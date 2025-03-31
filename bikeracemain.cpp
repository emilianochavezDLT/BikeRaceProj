//Program Created by: Emiliano Chavez De La Torre
#include <iostream>
#include "includes/organization/organization.h"
#include "includes/race/race.h"
#include "includes/validationFunctions/checkingUserInput.h"
#include "includes/validationFunctions/validateUserDecision.h"
#include <string>
#include <array>
using namespace std;


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
    bool userDecision = false; //This varaible will be used to catch the return of validateString()
    string fromUser; 
    array <string, 6> arrYN= {"Y", "y", "N", "n", "Q", "q"}; 

    cout << "Ready to create a Race?" << endl;
    cout << "(Y)es or (N)o, keep it to one character. Enter (Q) to quit " << endl;

    while(userDecision == false){
        bool isStringSizeValid, yNCharValid = false;
        cin >> fromUser;

        //This ensures that the string size of Valid
        //We only one character within the user input
        isStringSizeValid = checkingUserInput(fromUser);
        
        //Now, if the size is valid then check if the character is yes, no, or quit.
        if(isStringSizeValid == true){
            yNCharValid = validateUserDecision(arrYN, fromUser); //Returns True or False
            //If the string is in the array
            if(yNCharValid == true){
                //Also check if the string is a Q? If it is then Break out of the loop
                if(fromUser == "Q" || fromUser == "q"){
                    cout << "Thank you" << endl;
                    break;
                }
                //Then the string is good and change the userDecision to True
                else{
                    userDecision = true;
                }
            }
        }
        //This means that string size in not valid
        else{
            cout << "Rerun the program and try again." << endl;
            break;
        }

    }
    

        
}
