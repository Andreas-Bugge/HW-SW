#include "../headerfiles/Sensors.h"
#include "../headerfiles/StateManagement.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Sensors::Sensors() {
    srand(static_cast<unsigned int>(time(nullptr)));
}

Sensors::~Sensors() {
}

int Sensors::data() {
    return rand() % 6;
}