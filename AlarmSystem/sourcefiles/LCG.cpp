#include "../headerfiles/LCG.h"

LCG::LCG() {
    current = time(NULL);
    a = 1664525;
    c = 1013904223;
    m = 4294967296;
}

void LCG::seed(unsigned int seed) {
    current = seed;
}

unsigned int LCG::next() {
    current = (a * current + c) % m;
    return current;
}
