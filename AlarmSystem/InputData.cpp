#include "InputData.h"

InputData::InputData() : sensorSum(0) {}
InputData::~InputData() {}

void InputData::setCameraData(const std::array<std::array<int, 9>, 9>& data) {
    cameraData = data;
}

std::array<std::array<int, 9>, 9> InputData::getCameraData() const {
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
