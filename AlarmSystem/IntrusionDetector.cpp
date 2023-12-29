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
            // Hvis autoCheckPin returnerer false, forbliver alarmen aktiveret
            alarmTriggered = false;
            stateManager.activateSystem(true);
        }

        alarmTriggered = false;
        stateManager.activateSystem(true);
    }
}

