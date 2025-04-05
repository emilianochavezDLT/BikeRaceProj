cmake_minimum_required(VERSION 3.31.6)
project(RaceFundraiser LANGUAGES CXX)

#Setting the C++ Standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#---------------------#
#   MongoDB Camke     #
#---------------------#

#Reminder that this is specifcally for using homebrew

#For this MongoDB setup we are going force cmake to find out files by executing a command
set(MONGO_DRIVER_PREFIX "/opt/homebrew")

# Find packages 
set(libmongocxx_DIR "${MONGO_DRIVER_PREFIX}/Cellar/mongo-cxx-driver/4.0.0/lib/cmake/mongocxx-4.0.0")
set(libbsoncxx_DIR "${MONGO_DRIVER_PREFIX}/Cellar/mongo-cxx-driver/4.0.0/lib/cmake/bsoncxx-4.0.0")


find_package(mongocxx REQUIRED)
find_package(bsoncxx REQUIRED)


#---------------------#
# Basic Compile Setup #
#---------------------#


#Setting an Environment Variable for my Includes Directory
#The cool part of this, is that when are creating the src files for the headers,
#we no longer need the full path to be specifed in the src files or even in the main program.
#For example, we just need "organization/organization.cpp" in our src files from now on instead of 
#"../includes/organization/organization.cpp"
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/includes")

#Creating a library for all of my source files and calling bikerace_lib, so that main
#executable and the testing executables can use them together.
#Keep on adding when you make header and src files.
add_library(bikerace_lib
    src/organization/organization.cpp 
    src/race/race.cpp 
    src/validationFunctions/checkingUserInput.cpp
    src/validationFunctions/validateUserDecision.cpp
)


#Adding the Main Exectables of the project
#Notice that the name bikerace. We will use it again.
#Also this is what our program will be called. So its bikerace.exe
add_executable(bikerace 
    bikeracemain.cpp
)

#This specifies the directories of my header files
#Notice the name bikerace and how we the used the name bikerace_lib specifed on add_library.
target_include_directories(bikerace_lib PUBLIC
    ${INCLUDE_DIR}
    "${LIBMONGOCXX_INCLUDE_DIRS}/include/mongocxx/v_noabi"
    "${LIBBSONCXX_INCLUDE_DIRS}/include/bsoncxx/v_noabi"
)


#This function links the main executable with libraires specifed above.
target_link_libraries(bikerace PUBLIC bikerace_lib ${LIBMONGOCXX_LIBRARIES} ${LIBBSONCXX_LIBRARIES})


#---------------------#
#   Testing Setup     #
#---------------------#

#Since I installed it locally, I need to put this line in.
find_package(GTest REQUIRED)


#--------------#
# Unit Testing #
#--------------#
#We are going to set a varible to our test files
#This makes it eaiser for use to just add it our set function 
#Just keep adding if you make any test files along the way.
set(UNIT_TEST_SOURCES
    tests/unit/test_organization.cpp
    tests/unit/test_race.cpp
    tests/unit/test_validationFunctions.cpp
)

#Creates a .exe file for our tests, so we can run them
#Also the tests will be in one executable called runUnitTests.exe
add_executable(runUnitTests ${UNIT_TEST_SOURCES})

#This line links runUnitTests with the necessary libraies
#GTest::gtest and GTest::gtest_main contains the framework for Google Test 
#Notice bikerace It links the runTests executable with the libraries built from your main project's source files. 
#This allows the tests to access and call the functions and classes defined in organization.cpp, race.cpp, etc. 
#Without this, my tests wouldn't be able to interact with the project's code.
target_link_libraries(runUnitTests 
    GTest::gtest 
    GTest::gtest_main 
    bikerace_lib
)


#---------------------#
# Integration Testing #
#---------------------#

#set(INTEGRATION_TEST_SOURCES
#   #Add you testing here
#)


#
#add_executable(runIntegrationTests ${INTEGRATION_TEST_SOURCES})


#
#target_link_libraries(runIntegrationTests GTest::gtest GTest::gtest_main bikerace_lib)
#
#
#



# This allows us to use the Ctest framework, which makes it eaiser for us
include(CTest)

# See the two commnds bellow. So, the purpose of add_test function 
# is to allow CTest to run our test. For example the first add_test
# allows us to run the CTest command with UnitTests. "ctest -R UnitTests"
# The command part of the add_test function tells CTest to run the executable
# that we created here "add_executable(runUnitTests ${UNIT_TEST_SOURCES})" line 54. 

# Add unit tests to CTest
add_test(NAME UnitTests COMMAND runUnitTests)

# Add integration tests to CTest
#add_test(NAME IntegrationTests COMMAND runIntegrationTests)

