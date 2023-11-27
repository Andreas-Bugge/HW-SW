#ifndef CAMERA_H
#define CAMERA_H

#include <vector>

class Camera {
    public:
        Camera();
        ~Camera();

        std::vector<std::vector<int> > data();
};

#endif // CAMERA_H