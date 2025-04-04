#include "validationFunctions/validateUserDecision.h"

namespace valid_user_decision{

    //This function is highly specialized, and we only want the user_input to match
    //the chars in the array string that we intilized in the main function. 
    bool validate_user_decision(std::array <std::string, 6>& arr_string, std::string user_input){
        bool user_decision = false;
        //This for loop will only loop 6 times. 
        for(int i = 0; i < 6; i++){
            //Now, if our user_input character matches a char in the arr_string
            if(user_input == arr_string[i]){
                //Then the string is valid and will set the UserDecision to True
                //We just need the loop to match at least once. 
                user_decision = true;
            }
            //We don't need an else because the default of our return is false
            //If we don't get a match then we will handle it in our main function.
        }

        return user_decision;
    }

}
