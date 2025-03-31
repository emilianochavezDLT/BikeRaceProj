#ifndef ORGRANIZATION_H
#define ORGRANIZATION_H
#include <iostream>

class Organization{
    public:
        std::string organName;
        std::string description;

        //Constructors
        Organization(std::string name, std::string desc);

        //Destructor
        ~Organization();

        //Getters and Setters
        void setOrgranizationName(std::string name);
        std::string getOrgranizationName();
        void setDescription(std::string desc);
        std::string getDescription(); 
};

#endif