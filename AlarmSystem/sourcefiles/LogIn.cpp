#include "../headerfiles/LogIn.h"

#include <cstdlib> 
#include <ctime> 


LogIn::LogIn() : active(false) {
    //* Initialize the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));
}

LogIn::~LogIn() {
    
}

bool LogIn::valid(int P) {
    //* Check if the pin is valid (even number)
    return P % 2 == 0;
}

void LogIn::activateSystem(int P) {
    //* Attempt to activate the system with a pin
    if (valid(P)) {
        active = true;
    }
}

bool LogIn::isActive() {
    //* Return the state of the system
    return active;
}