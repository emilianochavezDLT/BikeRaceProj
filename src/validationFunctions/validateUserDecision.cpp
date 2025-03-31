#include "../includes/validationFunctions/validateUserDecision.h"
using namespace std;

//This function is highly specialized, and we only want the userInput to match
//the chars in the array string that we intilized in the main function. 
bool validateUserDecision(array <string, 6>& arrString, string userInput){
    bool userDecision = false;
    //This for loop will only loop 6 times. 
    for(int i = 0; i < 6; i++){
        //Now, if our userInput character matches a char in the arrString
        if(userInput == arrString[i]){
            //Then the string is valid and will set the UserDecision to True
            //We just need the loop to match at least once. 
            userDecision = true;
        }
        //We don't need an else because the default of our return is false
        //If we don't get a match then we will handle it in our main function.
    }
    
    return userDecision;
}


