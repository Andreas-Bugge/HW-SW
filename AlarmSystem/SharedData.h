#ifndef SHAREDDATA_H
#define SHAREDDATA_H

#include <vector>
#include <thread>
#include <chrono>
#include "Sensors.h" 
#include "Camera.h"  

class SharedData {
public:
    SharedData();
    ~SharedData();

    void setCameraData(const std::vector<std::vector<int>>& data);
    std::vector<std::vector<int>> getCameraData() const;
    void setSensorSum(int sum);
    int getSensorSum() const;

private:
    std::vector<std::vector<int>> cameraData;
    int sensorSum;
};

void sensorTask(SharedData& sharedData, Sensors& sensor1, Sensors& sensor2);
void cameraTask(SharedData& sharedData, Camera& camera);

#endif // SHAREDDATA_H
