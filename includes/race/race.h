#ifndef RACE_H
#define RACE_H


class Race{
    public:
        int raceDistance;
        float costOfRace;
        float chairtyPercentage;
        float totalRaceSales;

        //Constructor
        Race(int distance, float cost, float percentage, float totalSales);
        //Destructor
        ~Race();
        
        //Setters
        int setRaceDistance(int distance);
        float setCostOfRace(float cost);
        float setCharityPercentage(float percentage);
        float setTotalRaceSales(float totalSales);

        //Getters
        int getRaceDistance();
        float getCostOfRace();
        float getCharityPercentage();
        float getTotalRaceSales();

};




#endif