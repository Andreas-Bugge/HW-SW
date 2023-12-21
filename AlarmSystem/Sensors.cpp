#include "Sensors.h"
#include "StateManagement.h"
#include "LCG.h"

Sensors::Sensors() {
}

Sensors::~Sensors() {
}

int Sensors::data() {
    LCG randomGen;
    int data = randomGen.next() % 6;
    return data;
}