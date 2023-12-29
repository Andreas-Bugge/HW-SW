#include "IntrusionDetector.h"

IntrusionDetector::IntrusionDetector() {}
IntrusionDetector::~IntrusionDetector() {}

bool IntrusionDetector::checkForIntrusion(const SharedData& sharedData) {
    int sensorSum = sharedData.getSensorSum();
    auto cameraData = sharedData.getCameraData();

    return isIntrusionDetected(cameraData, sensorSum);
}

bool IntrusionDetector::isIntrusionDetected(const std::vector<std::vector<int>>& cameraData, int sensorSum) {
    int sum = 0;
    
    for (const auto& row : cameraData) {
        for (int val : row) {
            sum += sensorSum * val;
        }
    }
    return sum >= 6290;
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


