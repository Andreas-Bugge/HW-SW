#include "Camera.h"

Camera::Camera() {
}

Camera::~Camera() {
}

std::array<std::array<int, 9>, 9> Camera::data() {
    LCG randomGen;
    std::array<std::array<int, 9>, 9> matrix;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            matrix[i][j] = randomGen.next() % 10;
        }
    }
    return matrix;
}

