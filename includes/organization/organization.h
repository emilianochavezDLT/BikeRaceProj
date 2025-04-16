#ifndef INCLUDES_ORGANIZATION_ORGANIZATION_H
#define INCLUDES_ORGANIZATION_ORGANIZATION_H
#include <iostream>

namespace organization{
    class Organization{
        public:
            std::string organ_name;
            std::string description;
    
            //Constructors
            Organization(std::string name, std::string desc);
            Organization();
    
            //Destructor
            ~Organization();
    
            //Setters
            void set_organization_name(std::string name);
            void set_description(std::string desc);
            
            //Getters
            std::string get_organization_name();
            std::string get_description(); 
    };
    
}

#endif // ORGANIZATION_H