#include "IntrusionDetector.h"

IntrusionDetector::IntrusionDetector() {}
IntrusionDetector::~IntrusionDetector() {}

bool IntrusionDetector::checkForIntrusion(const InputData& sharedData) {
    int sensorSum = sharedData.getSensorSum();
    auto cameraDataArray = sharedData.getCameraData();

    int cameraDataRaw[9][9];
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cameraDataRaw[i][j] = cameraDataArray[i][j];
        }
    }

    return isIntrusionDetected(sensorSum, cameraDataRaw);
}


void measure(int *result, int sensorData[2], int cameraData[9][9]) {
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            sum += sensorData[0] * cameraData[i][j];
        }
    }
    *result = sum; 
}

bool IntrusionDetector::isIntrusionDetected(int sensorSum, int cameraData[9][9]) {
    int result;
    int sensorData[2] = {sensorSum, sensorSum};
    measure(&result, sensorData, cameraData);
    return result >= 6290; 
}

void IntrusionDetector::handleIntrusion(StateManagement& stateManager, LogIn& loginSystem) {
    alarmTriggered = true;

    if (alarmTriggered) {
        stateManager.activateSystem(false);

        if (loginSystem.autoCheckPin()) {
            std::cout << "Valid pin entered, deactivating alarm." << std::endl;
            alarmTriggered = false;
            stateManager.activateSystem(true);
        } else {
            // Start en ti sekunders nedtælling
            int counter = 0;
            const int timeout = 10000; // 10 sekunder, antager at hver iteration er 1 ms

            while (counter < timeout) {
                counter++;

                // Tjekker hvert 2. sekund (2000 ms)
                if (counter % 2000 == 0) {
                    std::cout << "Waiting for correct pin... " << (timeout - counter) / 1000 << " seconds remaining." << std::endl;
                    
                 while(!loginSystem.autoCheckPin()) {
                    std::cout << "Valid pin entered, deactivating alarm." << std::endl;
                    alarmTriggered = false;
                    stateManager.activateSystem(true);
                }
            }

            // Hvis timeout er nået uden korrekt pin, forbliver alarmen aktiveret
            std::cout << "Time expired, alarm remains activated." << std::endl;
            alarmTriggered = false;
            stateManager.activateSystem(true);
        }

        alarmTriggered = false;
        stateManager.activateSystem(true);
        }
    }
}


