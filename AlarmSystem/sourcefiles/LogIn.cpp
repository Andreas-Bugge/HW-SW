#include "../headerfiles/LogIn.h"
#include <cstdlib> 
#include <ctime> 

LogIn::LogIn() {
    // Initialiser den tilfældige number generator
    srand(static_cast<unsigned int>(time(nullptr)));
}

LogIn::~LogIn() {
}

bool LogIn::isValid(int P) {
    if (P % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int LogIn::promptForPin() {
    int enteredPin = rand() % 10;
    isValid(enteredPin);
    return enteredPin;
}
