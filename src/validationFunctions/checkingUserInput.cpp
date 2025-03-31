#include "validationFunctions/checkingUserInput.h"
using namespace std;

//This is a function that will validate the size of the string.
//In this highly specialized function, we only want to have our string to be one char.
bool checkingUserInput(string userInputString){
    bool userSizeValid = false;
    int userInputStringSize = 0;
    userInputStringSize = userInputString.size(); //Grabbing the size of the User Input string

    //We want the string to only be one character
    if(userInputStringSize == 1){
        userSizeValid = true; //Validate to true if the userInput was only one character
    } 
    //It was too long and try again.
    else{
        cout << "Try Again" << endl;
    }

    //Return True or False
    return userSizeValid;

}