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

    void measure(int *result, int sensorData[2], int cameraData[9][9]);

    void handleIntrusion(StateManagement& stateManager, LogIn& loginSystem);

    bool isIntrusionDetected(int sensorSum, int cameraData[9][9]); // Updated method signature
private:
    
    bool alarmTriggered;
};

#endif // INTRUSIONDETECTOR_H
