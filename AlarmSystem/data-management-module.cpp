// datamanagement.cpp
#include "sensors.h"
#include "camera.h"
#include <iostream>

int main() {
    // Create instances of Sensor and Camera
    Sensor sensor;
    Camera camera;

    // Sample data from the sensor
    int sensorData = sensor.sampleData();
    std::cout << "Sensor Data: " << sensorData << std::endl;

    // Sample data from the camera
    int cameraData[9][9];
    camera.sampleData(cameraData);

    // Display camera data (for demonstration purposes)
    std::cout << "Camera Data:\n";
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            std::cout << cameraData[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
