#ifndef INCLUDES_RACE_RACE_H
#define INCLUDES_RACE_RACE_H

namespace race{
    
    class Race{
        public:
            int race_distance;
            float cost_of_race;
            float chairty_percentage;
            float total_race_sales;
    
            //Constructor
            Race(int distance, float cost, float percentage, float totalSales);
            Race();
            //Destructor
            ~Race();
            
            //Setters
            void set_race_distance(int distance);
            void set_cost_of_race(float cost);
            void set_charity_percentage(float percentage);
            void set_total_race_sales(float total_sales);
    
            //Getters
            int get_race_distance();
            float get_cost_of_race();
            float get_charity_percentage();
            float get_total_race_sales();
    
    };
        
}


#endif