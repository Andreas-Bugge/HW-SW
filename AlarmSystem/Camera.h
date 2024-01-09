#ifndef CAMERA_H
#define CAMERA_H

#include <array>
#include "LCG.h"

class Camera {
public:
    Camera();
    ~Camera();

    std::array<std::array<int, 9>, 9> data(); // Updated return type
};

#endif // CAMERA_H
