#include "organization/organization.h"
#include "gtest/gtest.h"
using namespace std;


//Defining the test case
//OrganizationTest is the name of the test, and SettingNameForOrganization is the specific name of the test.
//This one uses the constuctor that takes in the arguments that we need
TEST(OrganizationTest, SettingNameForOrganization){

    //Creating an instance of our object
    Organization newOrg("The Pandas", "We race for bamboos");

    //Testing our get function to see if it fetches the name and desc
    string organName = newOrg.getOrgranizationName();
    string orgDesc = newOrg.getDescription();

    //Checking if it does return our name and desc
    EXPECT_EQ(organName, "The Pandas");
    EXPECT_EQ(orgDesc, "We race for bamboos");

}

//This test test's the constructor without any arguments forcing us to the set functions
TEST(OrganizationTest, SettingFunctionsInOrganization){

    Organization newOrg2;

    //Setting the name and description of the orgranization
    string organName2 = "Jaguars";
    string organDesc2 = "Climbing Trees";

    newOrg2.setOrgranizationName(organName2);
    newOrg2.setDescription(organDesc2);

    EXPECT_EQ(newOrg2.getOrgranizationName(), "Jaguars");
    EXPECT_EQ(newOrg2.getDescription(), "Climbing Trees");
        

}




