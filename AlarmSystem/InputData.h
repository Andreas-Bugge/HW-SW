#ifndef INPUTDATA_H
#define INPUTDATA_H

#include <array>
#include "Sensors.h" 
#include "Camera.h"  

class InputData {
public:
    InputData();
    ~InputData();

    void setCameraData(const std::array<std::array<int, 9>, 9>& data);
    std::array<std::array<int, 9>, 9> getCameraData() const;
    void setSensorSum(int sum);
    int getSensorSum() const;

private:
    std::array<std::array<int, 9>, 9> cameraData;
    int sensorSum;
};

void sensorTask(InputData& InputData, Sensors& sensor1, Sensors& sensor2);
void cameraTask(InputData& InputData, Camera& camera);

#endif // INPUTDATA_H
