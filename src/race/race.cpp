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

//Setter Functions
int Race::setRaceDistance(int distance){
    raceDistance = distance;
}

float Race::setCostOfRace(float cost){
    costOfRace = cost;
}

float Race::setCharityPercentage(float percentage){
    chairtyPercentage = percentage;
}

float Race::setTotalRaceSales(float totalSales){
    totalRaceSales = totalSales;
}

//Getters
int Race::getRaceDistance(){
    return raceDistance;
}

float Race::getCostOfRace(){
    return costOfRace;
}

float Race::getCharityPercentage(){
    return chairtyPercentage;
}

float Race::getTotalRaceSales(){
    return totalRaceSales;
}