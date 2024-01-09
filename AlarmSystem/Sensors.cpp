#include "Sensors.h"

Sensors::Sensors() {
}

Sensors::~Sensors() {
}

int Sensors::data() {
    LCG randomGen;
    int data = randomGen.next() % 6;
    return data;
}