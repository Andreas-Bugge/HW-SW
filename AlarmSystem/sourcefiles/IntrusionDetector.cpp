#include "../headerfiles/IntrusionDetector.h"


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

    return sum >= 5000;
}

void IntrusionDetector::handleIntrusion(StateManagement& stateManager, LogIn& loginSystem) {
    if (!alarmTriggered) {
        alarmTriggered = true;
        stateManager.activateAlarm(); 

        auto startTime = std::chrono::steady_clock::now();
        bool pinValidated = false;

        while (std::chrono::steady_clock::now() - startTime < std::chrono::seconds(10) && !pinValidated) {
            int pin = loginSystem.promptForPin();
            if (loginSystem.isValid(pin)) {
                pinValidated = true;
                std::cout << "Valid pin entered. Deactivating alarm." << std::endl;
                break;
            } else {
                std::cout << "Invalid pin. Try again." << std::endl;
            }
        }

        stateManager.deactivateSystem(); 
        alarmTriggered = false;
        stateManager.activateSystem(true);
    }
}
