cmake_minimum_required(VERSION 3.12)
project(AlarmSystem VERSION 1.0.0)

# Tilføj bibliotek
add_library(logIn sourcefiles/LogIn.cpp)

# Tilføj hovedprogrammet
add_executable(MainProgram main.cpp)

# Link biblioteket med hovedprogrammet
target_link_libraries(MainProgram logIn)
