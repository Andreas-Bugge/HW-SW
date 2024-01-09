#include "AlarmSystem.h"

StateManagement::StateManagement() : currentState(Inactive) {}

bool StateManagement::activateSystem(bool validPin) {
    if (validPin) {
        currentState = Active;
    } else {
        currentState = Inactive;
    }
    return currentState == Active;
}

void StateManagement::deactivateSystem() {
    currentState = Inactive;
}

void StateManagement::activateAlarm() {
    if (currentState == Active) {
        currentState = Alarmed;
        std::cout << "Alarm has been activated." << std::endl;
    } else {
        std::cout << "Error. System is not active." << std::endl;
    }
}

bool StateManagement::isSystemActive() const {
    return currentState == Active;
}


LogIn::LogIn(StateManagement& alarmSystem) : alarmSystem(alarmSystem) {
}

LogIn::~LogIn() {
}

bool LogIn::isValid(int pin) {
    if (pin % 2 == 0) {
        return true;
    } else {
        return false;
    }    
}

bool LogIn::autoCheckPin() {
    LCG randomGen;
    while (true) {
        int generatedPin = randomGen.next() % 10;

        if (isValid(generatedPin)) {
            std::cout << "Valid pin entered." << std::endl;
            alarmSystem.activateSystem(true);
            return true;
        }
    }
}
