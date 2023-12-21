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

    //! Print data for samlet sum af sensor og kamera data
    /*
    std::cout << "Samlet sum: " << sum << ". Tærskel for indtrængen: 6290." << std::endl;  */
    return sum >= 6290;
}

void IntrusionDetector::handleIntrusion(StateManagement& stateManager, LogIn& loginSystem) {
    alarmTriggered = true;

    if (alarmTriggered) {
        stateManager.activateSystem(false);
        
        auto pinCheckFuture = std::async(std::launch::async, [&]{
            return loginSystem.autoCheckPin();
        });

        for (int i = 10; i > 0; --i) {
            std::cout << "Intrusion found!!! Enter pincode or wait " << i << " seconds." << std::endl;
            if (pinCheckFuture.wait_for(std::chrono::seconds(1)) == std::future_status::ready) {
                if (pinCheckFuture.get()) {
                    std::cout << "Correct pin entered, deactivating alarm." << std::endl;
                    alarmTriggered = false;
                    stateManager.activateSystem(true);
                    return;
                }
            }
        }
        
        alarmTriggered = false;
        stateManager.activateSystem(true);
    }
}
