#ifndef STATEMANAGEMENT_H
#define STATEMANAGEMENT_H

#include <iostream>

class StateManagement {
    public:
        StateManagement();
        ~StateManagement();

        bool activateSystem(bool validPin);
        void deactivateSystem();
        void activateAlarm();
        bool isSystemActive() const;
        
    private:
        bool systemActive;

};


#endif // STATEMANAGEMENT.H