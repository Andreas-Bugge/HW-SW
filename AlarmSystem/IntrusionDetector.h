#ifndef INTRUSIONDETECTOR_H
#define INTRUSIONDETECTOR_H

#include <iostream>
#include "InputData.h"
#include "AlarmSystem.h"

class IntrusionDetector {
public:
    IntrusionDetector();
    ~IntrusionDetector();

    bool checkForIntrusion(const InputData& InputData);

    void handleIntrusion(StateManagement& stateManager, LogIn& loginSystem);

    bool isIntrusionDetected(const std::vector<std::vector<int>>& cameraData, int sensorSum);
private:
    
    bool alarmTriggered;
};

#endif // INTRUSIONDETECTOR_H
