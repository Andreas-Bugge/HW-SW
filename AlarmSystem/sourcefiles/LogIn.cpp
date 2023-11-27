#include "LogIn.h"
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()

// Constructor definition
LogIn::LogIn() : active(false) {
    //* Initialize the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));
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