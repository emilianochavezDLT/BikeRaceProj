#include "includes/race/race.h"
#include <iostream>

using namespace std;

//Creating ghe constructor first and initalizing it
Race::Race(int distance, float cost, float percentage, float totalSales){
    raceDistance = distance;
    costOfRace = cost;
    chairtyPercentage = percentage;
    totalRaceSales = totalSales;
}

//Destructor
Race::~Race(){
}

