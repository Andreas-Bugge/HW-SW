#include <iostream>

//* Headerfiles
#include "headerfiles/LogIn.h"

int main() {
    // Logging into the system
    LogIn loginSystem;

    while (!loginSystem.isActive()) {
        int P = rand() % 10; // Generate a random pin less than 10
        std::cout << "Generated pin: " << P << std::endl;

        if(loginSystem.valid(P)) {
            std::cout << "Pin is valid. Activating alarm system." << std::endl;
            loginSystem.activateSystem(P);    
        } else {
            std::cout << "Pin is invalud. System remains inactive." << std::endl;
        }
    }

    return 0;
}
