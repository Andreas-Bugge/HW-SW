#ifndef ALARMSYSTEM_H
#define ALARMSYSTEM_H

#include <iostream>
#include "LCG.h"

class StateManagement {
public:
    enum State { Inactive, Active, Alarmed };

    StateManagement();

    bool activateSystem(bool validPin);
    void deactivateSystem();
    void activateAlarm();
    bool isSystemActive() const;

private:
    State currentState;
};

class LogIn {
public:
    LogIn(StateManagement& alarmSystem);
    ~LogIn();

    bool isValid(int pin);
    bool autoCheckPin();

private:
    StateManagement& alarmSystem;
};


#endif // ALARMSYSTEM.H