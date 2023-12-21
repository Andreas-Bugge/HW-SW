#include "StateManagement.h"

StateManagement::StateManagement() : systemActive(false) {   
}

StateManagement::~StateManagement() {
}

bool StateManagement::activateSystem(bool ValidPin) {
    if (ValidPin) {
        systemActive = true;
    } else {
        systemActive = false;
    }
    return systemActive;
}

void StateManagement::deactivateSystem() {
    systemActive = false; 
}

void StateManagement::activateAlarm() {
    if (systemActive) {
        std::cout << "Alarm has been activated." << std::endl;
    } else {
        std::cout << "Error. System is not active." << std::endl;
    }
}

bool StateManagement::isSystemActive() const {
    return systemActive;
}
