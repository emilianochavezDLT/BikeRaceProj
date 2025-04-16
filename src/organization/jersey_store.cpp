#include "organization/jersey_store.h"
#include <iostream>

namespace organization_jersey_store{
    
    bool Jersey_Store::validate_shirt_size(char size){
        bool shirt_size_valid = false;
        
        return shirt_size_valid;
    }
    
    //Construtor
    Jersey_Store::Jersey_Store(){};
    
    //Another full construcutor
    Jersey_Store::Jersey_Store(std::string name, char size, float cost, int quantity){
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
    void Jersey_Store::set_size_of_jersey(char size){
        size_of_jersey = size;
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

    char Jersey_Store::get_jersey_size(){
        return size_of_jersey;
    }

    float Jersey_Store::get_cost_of_jersey(){
        return cost_of_jersey;
    }

    int Jersey_Store::get_quantity_of_jerseys(){
        return quantity_of_jerseys;
    }

}