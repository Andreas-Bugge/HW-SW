#ifndef INTRUSIONDETECTOR_H
#define INTRUSIONDETECTOR_H

#include <iostream>
#include <vector>
#include <thread>
#include "SharedData.h"
#include "StateManagement.h"
#include "PinCode.h"

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
