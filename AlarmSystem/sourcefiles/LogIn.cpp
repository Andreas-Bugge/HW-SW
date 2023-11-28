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

bool LogIn::autoCheckPin() {
    while (true) {
        int generatedPin = rand() % 10; // Genererer et tilfældigt tal mellem 0 og 9
        std::cout << "Auto-generated pin: " << generatedPin << std::endl;

        if (this->isValid(generatedPin)) {
            std::cout << "Valid pin entered." << std::endl;
            return true;
        } else {
            std::cout << "Invalid pin." << std::endl;
        }

        /*
        std::this_thread::sleep_for(std::chrono::seconds(4)); // Venter 4 sekunder før næste forsøg
        */
    }
}


