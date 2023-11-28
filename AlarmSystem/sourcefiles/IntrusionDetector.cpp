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

    std::cout << "Samlet sum: " << sum << ". Tærskel for indtrængen: 6290." << std::endl;
    return sum >= 6290;
}

void IntrusionDetector::handleIntrusion(StateManagement& stateManager, LogIn& loginSystem) {
    if (!alarmTriggered) {
        alarmTriggered = true;
        stateManager.activateAlarm(); 

        std::cout << "Intrusion found. Enter valid pin or wait 10 seconds." << std::endl;
        //loginSystem.checkForValidPin();
        
        alarmTriggered = false;
        stateManager.activateSystem(true);
    }
}
