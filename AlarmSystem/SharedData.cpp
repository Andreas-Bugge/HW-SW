#include "SharedData.h"


SharedData::SharedData() : sensorSum(0) {}
SharedData::~SharedData() {}

void SharedData::setCameraData(const std::vector<std::vector<int>>& data) {
    cameraData = data;
}

std::vector<std::vector<int>> SharedData::getCameraData() const {
    return cameraData;
}

void SharedData::setSensorSum(int sum) {
    sensorSum = sum;
}

int SharedData::getSensorSum() const {
    return sensorSum;
}

void sensorTask(SharedData& sharedData, Sensors& sensor1, Sensors& sensor2) {
    int sum = sensor1.data() + sensor2.data();
    sharedData.setSensorSum(sum);
}

void cameraTask(SharedData& sharedData, Camera& camera) {
    auto data = camera.data();
    sharedData.setCameraData(data);
}
