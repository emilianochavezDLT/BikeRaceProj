#include "validationFunctions/checkingUserInput.h"

namespace check_user_input{
    //This is a function that will validate the size of the string.
    //In this highly specialized function, we only want to have our string to be one char.
    bool checking_user_input(std::string user_input_string){
        bool user_size_valid = false;
        int user_input_string_size = 0;
        user_input_string_size = user_input_string.size(); //Grabbing the size of the User Input string

        //We want the string to only be one character
        if(user_input_string_size == 1){
            user_size_valid = true; //Validate to true if the userInput was only one character
        } 
        //It was too long and try again.
        else{
            std::cout << "Try Again" << std::endl;
        }

        //Return True or False
        return user_size_valid;

    }


}
