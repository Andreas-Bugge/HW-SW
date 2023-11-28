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

bool LogIn::checkForValidPin() {
    int attempts = 0;
    while (attempts < 3) {  // Giver op til 3 forsøg
        int pin;
        std::cout << "Enter pin: ";
        std::cin >> pin;

        if (this->isValid(pin)) {  // Bruger 'this' pointeren til at kalde 'isValid'
            return true;
        }

        attempts++;
        std::this_thread::sleep_for(std::chrono::seconds(2)); // Venter 3 sekunder før næste forsøg
    }

    return false;
}
