#include "race/race.h"
#include "gtest/gtest.h"
using namespace std;

TEST(RaceTest1, ConstructorTest){
    //Creating an Instance of a Race Object
    //raceDistance, cost, percentage, totalSales
    Race race1(25, 50.00, 10.0, 500);

    //Getting those distances using our get functions
    int raceDist = 0;
    float raceCost = 0;
    float racePercentage = 0;
    float raceSales = 0;


    raceDist = race1.getRaceDistance();
    raceCost = race1.getCostOfRace();
    racePercentage = race1.getCharityPercentage();
    raceSales = race1.getTotalRaceSales();

    //Expecting those values to be true
    EXPECT_EQ(raceDist, 25);
    EXPECT_EQ(raceCost, 50.00);
    EXPECT_EQ(racePercentage, 10.0);
    EXPECT_EQ(raceSales, 500);

}

TEST(RaceTest2, DefaultConstructor){
    
    Race race2;

    int raceDist2 = 0;
    float raceCost2 = 0;
    float racePercentage2 = 0;
    float raceSales2 = 0;

    raceDist2 = 50;
    raceCost2 = 100.00;
    racePercentage2 = 15.00;
    raceSales2 = 200.00;

    race2.setRaceDistance(raceDist2);
    race2.setCostOfRace(raceCost2);
    race2.setCharityPercentage(racePercentage2);
    race2.setTotalRaceSales(raceSales2);

    //Expects
    EXPECT_EQ(race2.getRaceDistance(), 50);
    EXPECT_EQ(race2.getCostOfRace(), 100.00);
    EXPECT_EQ(race2.getCharityPercentage(), 15.00);
    EXPECT_EQ(race2.getTotalRaceSales(), 200.00);
    
}