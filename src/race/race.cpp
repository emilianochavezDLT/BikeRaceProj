#include "race/race.h"
#include <iostream>

namespace race{

    //Creating the constructor first and initalizing it
    Race::Race(int distance, float cost, float percentage, float total_sales){
        race_distance = distance;
        cost_of_race = cost;
        chairty_percentage = percentage;
        total_race_sales = total_sales;
    }

    Race::Race(){}

    //Destructor
    Race::~Race(){
    }

    //Setter Functions
    void Race::set_race_distance(int distance){
        race_distance = distance;
    }

    void Race::set_cost_of_race(float cost){
        cost_of_race = cost;
    }

    void Race::set_charity_percentage(float percentage){
        chairty_percentage = percentage;
    }

    void Race::set_total_race_sales(float total_sales){
        total_race_sales = total_sales;
    }

    //Getters
    int Race::get_race_distance(){
        return race_distance;
    }

    float Race::get_cost_of_race(){
        return cost_of_race;
    }

    float Race::get_charity_percentage(){
        return chairty_percentage;
    }

    float Race::get_total_race_sales(){
        return total_race_sales;
    }


}
