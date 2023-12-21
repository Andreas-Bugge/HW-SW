cmake_minimum_required(VERSION 3.12)
project(AlarmSystem VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 11)

# Define the source files for Alarmlib
set(LIBRARY_SOURCES
    sourcefiles/PinCode.cpp
    sourcefiles/StateManagement.cpp
    sourcefiles/Sensors.cpp
    sourcefiles/Camera.cpp
    sourcefiles/SharedData.cpp
    sourcefiles/IntrusionDetector.cpp
    sourcefiles/LCG.cpp
)

# Add library
add_library(Alarmlib ${LIBRARY_SOURCES})

# Add main program
add_executable(MainProgram AlarmSystem.cpp)

# Link the library with the main program
target_link_libraries(MainProgram Alarmlib)
 
