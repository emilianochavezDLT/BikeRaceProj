#include "organization/organization.h"
#include "gtest/gtest.h"


//Defining the test case
//OrganizationTest is the name of the test, and SettingNameForOrganization is the specific name of the test.
//This one uses the constuctor that takes in the arguments that we need
TEST(OrganizationTest, SettingNameForOrganization){

    //Creating an instance of our object
    organization::Organization new_org("The Pandas", "We race for bamboos");

    //Testing our get function to see if it fetches the name and desc
    std::string organ_name = organization::new_org.get_organization_name();
    std::string organ_desc = organization::newOrg.get_description();

    //Checking if it does return our name and desc
    EXPECT_EQ(organ_name, "The Pandas");
    EXPECT_EQ(organ_desc, "We race for bamboos");

}

//This test test's the constructor without any arguments forcing us to the set functions
TEST(OrganizationTest, SettingFunctionsInOrganization){

    organization::Organization new_org_2;

    //Setting the name and description of the orgranization
    std::string organ_name2 = "Jaguars";
    std::string organ_desc2 = "Climbing Trees";

    organization::new_org_2.setOrgranizationName(organ_name2);
    organization::new_org_2.setDescription(organ_desc2);

    EXPECT_EQ(organization::new_org_2.get_organization_name(), "Jaguars");
    EXPECT_EQ(organization::new_org_2.get_description(), "Climbing Trees");
        

}




