#ifndef CAMERA_H
#define CAMERA_H

#include <vector>
#include "LCG.h"

class Camera {
    public:
        Camera();
        ~Camera();

        std::vector<std::vector<int> > data();
};

#endif // CAMERA_H