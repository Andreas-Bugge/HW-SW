#include "LCG.h"

static unsigned int pseudoRandomSeed = 0;

LCG::LCG() : a(1664525), c(1013904223), m(4294967296) {
    seed(pseudoRandomSeed++);
}

void LCG::seed(unsigned int seed) {
    current = seed;
}

unsigned int LCG::next() {
    current = (a * current + c) % m;
    return current;
}
