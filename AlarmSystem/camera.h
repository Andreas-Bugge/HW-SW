#ifndef CAMERA_H
#define CAMERA_H

#include <cstdlib>

class Camera {
public:
    // Function to sample data from the camera
    void sampleData(int data[9][9]);
};

#endif // CAMERA_H