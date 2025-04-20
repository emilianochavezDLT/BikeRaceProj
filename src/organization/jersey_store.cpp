#include "organization/jersey_store.h"
#include <iostream>
#include <array>
#include <algorithm>
#include <string>

namespace organization_jersey_store{
    
    //Cleaning up input for shirt string input to be clean before being processed.
    bool clean_up_shirt_string_input(std::string user_input){
        bool shirt_string_laundry = false;

        //First lets remove any whitespaces
        user_input.erase(std::remove_if(user_input.begin(), user_input.end(), ::isspace), user_input.end());

        //Then check to see how long to the string is
        int user_string_size = 0;
        user_string_size = user_input.size();

        //If the string is less than or equal to 4 chars then we return true
        if(user_string_size <= 4){
            shirt_string_laundry = true;
        }
        //Else: return false, which is the defualt
        else{
            std::cout << "Shirt Size is invalid" << std::endl;
        }

        return shirt_string_laundry;
    }

    bool Jersey_Store::validate_shirt_size(std::string size){
        bool shirt_size_valid = false;
        //Cleanup input first before actually finding the size of a shirt
        bool is_shirt_clean = false;
        is_shirt_clean = clean_up_shirt_string_input(size); //Sending our input to be cleaned up.

        if (is_shirt_clean == true){
            //Setting the string of the array to be common characters in a shirt size
            std::array<std::string, 6> shirt_size_arr = {"xs", "s", "m", "l", "xlg", "xxlg"};
            
            //Here we are just using a simple for loop to search for the string
            for(int i = 0; i < 6; i++){
                
                //Checking if the user_inputted size matched our string
                if(size == shirt_size_arr[i]){
                    shirt_size_valid = true;
                    break;
                }
                else{
                    std::cout << "Could not find the shirt size." << std::endl;
                }

            }
        }        
        return shirt_size_valid;
    }
    
    //Construtor
    Jersey_Store::Jersey_Store(){};
    
    //Another full construcutor
    Jersey_Store::Jersey_Store(std::string name, std::string size, float cost, int quantity){
        jersey_name = name;
        size_of_jersey = size;
        cost_of_jersey = cost;
        quantity_of_jerseys = quantity;

    }
    
    //Destructor
    Jersey_Store::~Jersey_Store(){};

    //Setters
    void Jersey_Store::set_jersey_name(std::string name){
        jersey_name = name;
    }

    void Jersey_Store::set_size_of_jersey(std::string size){   
        //The setting of this variable will different since we want to validate our shirt size
        bool shirt_size_validation = false;
        while(shirt_size_validation == false){
            //Calling our private validation function
            shirt_size_validation = validate_shirt_size(size); //Validate shirt size determines if we break our wbile loop.
            
            //if the shirt size validation is true then size_of_jersey is = size
            if(shirt_size_validation == true){
                size_of_jersey = size;
            }
            else{
                std::cout << "Retry, and input a valid shirt size: ";
                std::cin >> size;
            }
        }
    }
    void Jersey_Store::set_cost_of_jersey(float cost){
        cost_of_jersey = cost;
    }
    void Jersey_Store::set_quantity_of_jersey(int quantity){
        quantity_of_jerseys = quantity;
    }

    //Getters
    std::string Jersey_Store::get_jersey_name(){
        return jersey_name;
    }

    std::string Jersey_Store::get_jersey_size(){
        return size_of_jersey;
    }

    float Jersey_Store::get_cost_of_jersey(){
        return cost_of_jersey;
    }

    int Jersey_Store::get_quantity_of_jerseys(){
        return quantity_of_jerseys;
    }

}