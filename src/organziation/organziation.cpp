#include "includes/organization/organization.h"
#include <iostream>
using namespace std;

//Constructor
Organization::Organization(std::string name, std::string desc){
    organName = name;
    description = desc;
}

//Destructor
Organization::~Organization(){
}

//Setter Functions and they are pretty self explanatory
string Organization::setOrgranizationName(string name){
    organName = name;
}

string Organization::setDescription(string desc){
    description = desc;
}

//Getter Functions and they are pretty self explanatory
string Organization::getOrgranizationName(){
    return organName;
}

string Organization::getDescription(){
    return description;
}