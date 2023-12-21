#include "Camera.h"

Camera::Camera() {
}

Camera::~Camera() {
}

std::vector<std::vector<int>> Camera::data() {
    LCG randomGen;

    std::vector<std::vector<int>> matrix(9, std::vector<int>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            matrix[i][j] = randomGen.next() % 10;
        }
    }
    return matrix;
}
