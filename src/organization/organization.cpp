#include "organization/organization.h"
#include <iostream>

namespace organization{
    //Constructor
    Organization::Organization(std::string name, std::string desc){
        organ_name = name;
        description = desc;
    }

    //Another Constructor
    Organization::Organization(){}

    //Destructor
    Organization::~Organization(){
    }

    //Setter Functions and they are pretty self explanatory
    void Organization::set_organization_name(std::string name){
        organ_name = name;
    }

    void Organization::set_description(std::string desc){
        description = desc;
    }

    //Getter Functions and they are pretty self explanatory
    std::string Organization::get_organization_name(){
        return organ_name;
    }

    std::string Organization::get_description(){
        return description;
    }

}
