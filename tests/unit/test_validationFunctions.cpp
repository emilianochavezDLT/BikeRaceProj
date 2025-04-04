#include "validationFunctions/checkingUserInput.h"
#include "validationFunctions/validateUserDecision.h"
#include "gtest/gtest.h"
#include <array>


/**
 * This first test case test's if multiple characters are inputted
 * If multiple chars are inputted then the function should return false.
 */
TEST(CheckingUserInput, SizeCheckOver){
    //For this case we need random strings for input test
    std::string test_input = "klkdlsd"; //let put random chars in.

    //Lets capture the return of the input into a varible
    //which we will initalize as false
    bool input_truthiness = false;

    //Lets call the function to test this input
    input_truthiness = check_user_input::checking_user_input(test_input); //This test will output a string saying "Try Again"

    //With the input just passed into the function we should get a false 
    //Using the assertion for bools we can use the function EXPECT_FALSE to expect a false
    EXPECT_FALSE(input_truthiness); //This test should pass

}

//This test case checks of the just the size is correct
TEST(CheckingUserInput, SizeCheckCorrect){
    //For this case lets just put in the correct number of char, which is just one
    std::string test_input = "k"; //lets put a random k in their

    //Lets capture the return of the input into a varible
    //which we will initalize as false
    bool input_truthiness = false;

    //Lets call the function to test this input
    input_truthiness = check_user_input::checking_user_input(test_input); //This test will output a string saying "Try Again"

     
    //Using the assertion for bools we can use the function EXPECT_TRUE to expect a true
    EXPECT_TRUE(input_truthiness); //This test should pass

}

//This test case checks if spaces in the begginning of the input is valid
//We should a false on this one.
TEST(CheckingUserInput, SizeCheckSpaceInBeginning){
    //For this case lets just put in the correct number of char, but with a space
    std::string test_input = " s"; //lets put a random s in their

    //Lets capture the return of the input into a varible
    //which we will initalize as false
    bool input_truthiness = false;

    //Lets call the function to test this input
    input_truthiness = check_user_input::checking_user_input(test_input);

     
    //Using the assertion for bools we can use the function EXPECT_FALSE to expect a false
    EXPECT_FALSE(input_truthiness); //This test should passs

}

TEST(CheckingUserInput, SizeCheckSpaceAtTheEnd){
    //For this case lets just put in the correct number of char, but with a space at the end
    std::string test_input = "w "; //lets put a random w in their

    //Lets capture the return of the input into a varible
    //which we will initalize as false
    bool input_truthiness = false;

    //Lets call the function to test this input
    input_truthiness = check_user_input::checking_user_input(test_input); //This test will output a string saying "Try Again"

     
    //Using the assertion for bools we can use the function EXPECT_FALSE to expect a false
    EXPECT_FALSE(input_truthiness); //This test should passs

}


/**
 * The next section of tests we are going to assume that our
 * input is checked to the correct size. 
 * 
 * These tests checks if our one char is within our array.
 * These tests are subject to change once a UI is implemented.
 * 
 */
TEST(ValidateUserDecision, NoneMatchedChar){

    //Initializing a bool to capture our return of the valid user decision fucntion
    bool user_decision = false;
    
    //Lets get some test input
    std::string test_input_2 = "f";

    //Initializing our array needed to be pass in our valid user decision function
    std::array <std::string, 6> arr_yn= {"Y", "y", "N", "n", "Q", "q"}; 

    //This should return false based on our array of chars
    user_decision = valid_user_decision::validate_user_decision(arr_yn, test_input_2);

    //Expect that our decision will be false
    EXPECT_FALSE(user_decision); //This test should pass


}

//This test should be similar to the one up top but, 
//it is a true case
TEST(ValidateUserDecision, MatchedArrayChar){

        //Initializing a bool to capture our return of the valid user decision fucntion
        bool user_decision = false;
    
        //Lets get some test input
        std::string test_input_2 = "y";
    
        //Initializing our array needed to be pass in our valid user decision function
        std::array <std::string, 6> arr_yn= {"Y", "y", "N", "n", "Q", "q"}; 
    
        //This should return false based on our array of chars
        user_decision = valid_user_decision::validate_user_decision(arr_yn, test_input_2);
    
        //Expect that our decision will be false
        EXPECT_TRUE(user_decision); //This test should pass
    
    
}

