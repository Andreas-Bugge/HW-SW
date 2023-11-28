#ifndef INTRUSIONDETECTOR_H
#define INTRUSIONDETECTOR_H

#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include "../headerfiles/SharedData.h"
#include "../headerfiles/StateManagement.h"
#include "../headerfiles/LogIn.h"

class IntrusionDetector {
public:
    IntrusionDetector();
    ~IntrusionDetector();

    bool checkForIntrusion(const SharedData& sharedData);

    void handleIntrusion(StateManagement& stateManager, LogIn& loginSystem);

    bool isIntrusionDetected(const std::vector<std::vector<int>>& cameraData, int sensorSum);
private:
    
    bool alarmTriggered;
};

#endif // INTRUSIONDETECTOR_H
