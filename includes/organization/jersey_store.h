#ifndef INCLUDES_ORGANIZATION_JERSEY_STORE_H
#define INCLUDES_ORGANIZATION_JERSEY_STORE_H
#include <iostream>
#include <vector>

namespace organization_jersey_store{
    class Jersey_Store{
        private:
        bool validate_shirt_size(char size);

        public:
        std::string jersey_name;
        char size_of_jersey;
        float cost_of_jersey;
        int quantity_of_jerseys;
        
        //Construtor
        Jersey_Store();
        //Another full construcutor
        Jersey_Store(std::string name, char size, float cost, int quantity);

        //Destructor
        ~Jersey_Store();

        //Setters
        void set_jersey_name(std::string name);
        void set_size_of_jersey(char size);
        void set_cost_of_jersey(float cost);
        void set_quantity_of_jersey(int quantity);

        //Getters
        std::string get_jersey_name();
        char get_jersey_size();
        float get_cost_of_jersey();
        int get_quantity_of_jerseys();

        //Helper Functions for validation


        
    };

}


#endif
