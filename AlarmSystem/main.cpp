#include <iostream>
#include <cstdlib>
#include <ctime>

//* Headerfiles
#include "AlarmSystem.h"
#include "Sensors.h"
#include "Camera.h"
#include "InputData.h"
#include "IntrusionDetector.h"
#include "LCG.h"

bool tryActivateSystem(StateManagement& stateManager, LogIn& loginSystem, LCG& randomGen) {
    int P = randomGen.next() % 10; 
    std::cout << "Generated pin: " << P << std::endl;

    if(loginSystem.isValid(P)) {
        std::cout << "Pin is valid. Activating alarm system." << std::endl;
        return stateManager.activateSystem(true);
    } else {
        std::cout << "Pin is invalid. System remains inactive." << std::endl;
        return false;
    }
}

int main() {
    StateManagement stateManager;
    LogIn loginSystem(stateManager);
    Sensors sensor1, sensor2;
    Camera camera;
    InputData inputData;
    IntrusionDetector intrusionDetector;
    LCG randomGen;    

    int loginAttemptCounter = 0;
    const int loginRetryInterval = 100; // 10 milisekunder

    //? Logging in
    while (!tryActivateSystem(stateManager, loginSystem, randomGen)) {
        if (loginAttemptCounter >= loginRetryInterval) {
            // Reset tælleren og forsøg at logge ind igen
            loginAttemptCounter = 0;
        } else {
            // Inkrementér tælleren
            loginAttemptCounter++;
        }
    }

    //? System state: Active - Gathering Data
    std::cout << "Pin code has been provided. System state is active: \n" << std::endl;

    //? Simuleret tidsbaseret kontrol loop
    int sensorTimeCounter = 0;
    int cameraTimeCounter = 0;
    const int sensorTaskInterval = 60;  //? Interval for sensorTask i "millisekunder"
    const int cameraTaskInterval = 120; //? Interval for cameraTask i "millisekunder"

    while (stateManager.isSystemActive()) {
        //? Udfør sensorTask ved hvert sensorTaskInterval
        if (sensorTimeCounter >= sensorTaskInterval) {
            sensorTask(inputData, sensor1, sensor2);
            sensorTimeCounter = 0;
        }

        //? Udfør cameraTask ved hvert cameraTaskInterval
        if (cameraTimeCounter >= cameraTaskInterval) {
            cameraTask(inputData, camera);
            cameraTimeCounter = 0;
        }

        //? Tjekker for indtrængen
        if (intrusionDetector.checkForIntrusion(inputData)) {
            std::cout << "Intrusion detected! Activating alarm." << std::endl;
            stateManager.activateAlarm();
            intrusionDetector.handleIntrusion(stateManager, loginSystem);
        }

        //? Viser sensor- og kameradata
        int sensorSum = inputData.getSensorSum();
        auto cameraData = inputData.getCameraData();
        std::cout << "Sensor Sum: " << sensorSum << "\n";
        std::cout << "Camera Data:\n";
        for (const auto& row : cameraData) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n"; 

        //? Inkrementér tællere for simuleret tid. 
        sensorTimeCounter++;
        cameraTimeCounter++;
    }

    return 0;
}
