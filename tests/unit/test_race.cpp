#include "race/race.h"
#include "gtest/gtest.h"


TEST(RaceTest1, ConstructorTest){
    //Creating an Instance of a Race Object
    //race_distance, cost, percentage, totalSales
    race::Race race1(25, 50.00, 10.0, 500);

    //Getting those distances using our get functions
    int race_dist = 0;
    float race_cost = 0;
    float race_percentage = 0;
    float race_sales = 0;


    race_dist = race1.get_race_distance();
    race_cost = race1.get_cost_of_race();
    race_percentage = race1.get_charity_percentage();
    race_sales = race1.get_total_race_sales();

    //Expecting those values to be true
    EXPECT_EQ(race_dist, 25);
    EXPECT_EQ(race_cost, 50.00);
    EXPECT_EQ(race_percentage, 10.0);
    EXPECT_EQ(race_sales, 500);

}

TEST(RaceTest2, DefaultConstructor){
    
    race::Race race2;

    int race_dist2 = 0;
    float race_cost2 = 0;
    float race_percentage2 = 0;
    float race_sales2 = 0;

    race_dist2 = 50;
    race_cost2 = 100.00;
    race_percentage2 = 15.00;
    race_sales2 = 200.00;

    race2.set_race_distance(race_dist2);
    race2.set_cost_of_race(race_cost2);
    race2.set_charity_percentage(race_percentage2);
    race2.set_total_race_sales(race_sales2);

    //Expects
    EXPECT_EQ(race2.get_race_distance(), 50);
    EXPECT_EQ(race2.get_cost_of_race(), 100.00);
    EXPECT_EQ(race2.get_charity_percentage(), 15.00);
    EXPECT_EQ(race2.get_total_race_sales(), 200.00);
    
}