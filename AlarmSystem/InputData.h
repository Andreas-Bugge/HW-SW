#ifndef INPUTDATA_H
#define INPUTDATA_H

#include <vector>
#include "Sensors.h" 
#include "Camera.h"  

class InputData {
public:
    InputData();
    ~InputData();

    void setCameraData(const std::vector<std::vector<int>>& data);
    std::vector<std::vector<int>> getCameraData() const;
    void setSensorSum(int sum);
    int getSensorSum() const;

private:
    std::vector<std::vector<int>> cameraData;
    int sensorSum;
};

void sensorTask(InputData& InputData, Sensors& sensor1, Sensors& sensor2);
void cameraTask(InputData& InputData, Camera& camera);

#endif // INPUTDATA_H
