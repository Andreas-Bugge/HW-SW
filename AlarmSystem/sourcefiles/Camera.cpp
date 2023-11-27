#include "../headerfiles/Camera.h"

#include <cstdlib>
#include <ctime>

Camera::Camera() {
    srand(static_cast<unsigned int>(time(nullptr)));
}

Camera::~Camera() {
}

std::vector<std::vector<int>> Camera::data() {
    std::vector<std::vector<int>> matrix(9, std::vector<int>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            matrix[i][j] = rand() % 10;
        }
    }
    return matrix;
}
