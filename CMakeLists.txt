cmake_minimum_required(VERSION 3.31.6)
project(RaceFundraiser LANGUAGES CXX)

#Setting the C++ Standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Setting an Environment Varible for my Includes Directory
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/includes")

#Adding the Main Exectables of the project
add_executable(bikerace 
    src/organization/organization.cpp 
    src/race/race.cpp 
    src/validationFunctions/checkingUserInput.cpp
    src/validationFunctions/validateUserDecision.cpp
    bikeracemain.cpp
)

#This specifies the directories of my header files
target_include_directories(bikerace PRIVATE
    ${INCLUDE_DIR}
)
