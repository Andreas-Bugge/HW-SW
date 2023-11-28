#include "../headerfiles/LogIn.h"
#include "../headerfiles/LCG.h"

LogIn::LogIn() {
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
        LCG randomGen;
        int generatedPin = randomGen.next() % 10;

        if (this->isValid(generatedPin)) {
            std::cout << "Valid pin entered." << std::endl;
            return true;
        } else {
            /*std::cout << "Invalid pin." << std::endl;*/
        }
    }
}


