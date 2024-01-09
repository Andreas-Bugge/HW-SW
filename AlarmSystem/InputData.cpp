#include "InputData.h"

InputData::InputData() : sensorSum(0) {}
InputData::~InputData() {}

void InputData::setCameraData(const std::vector<std::vector<int>>& data) {
    cameraData = data;
}

std::vector<std::vector<int>> InputData::getCameraData() const {
    return cameraData;
}

void InputData::setSensorSum(int sum) {
    sensorSum = sum;
}

int InputData::getSensorSum() const {
    return sensorSum;
}

void sensorTask(InputData& inputData, Sensors& sensor1, Sensors& sensor2) {
    int sum = sensor1.data() + sensor2.data();
    inputData.setSensorSum(sum);
}

void cameraTask(InputData& inputData, Camera& camera) {
    auto data = camera.data();
    inputData.setCameraData(data);
}
