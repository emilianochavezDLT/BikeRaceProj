//Program Created by: Emiliano Chavez De La Torre
#include <iostream>
#include "includes/organization/organization.h"
#include "includes/race/race.h"
#include <string>
#include <array>
using namespace std;

bool checkingUserInput(string userInputString);
bool validateUserDecision(array <string, 6>& arrString, string userInput);


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


