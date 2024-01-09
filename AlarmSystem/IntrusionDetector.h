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
    bool isIntrusionDetected(int sensorSum, int cameraData[9][9]);

private:
    bool alarmTriggered;
};

#endif // INTRUSIONDETECTOR_H
