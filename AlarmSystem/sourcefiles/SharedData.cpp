#include "../headerfiles/SharedData.h"


SharedData::SharedData() : sensorSum(0) {}
SharedData::~SharedData() {}

void SharedData::setCameraData(const std::vector<std::vector<int>>& data) {
    std::lock_guard<std::mutex> lock(mutex);
    cameraData = data;
}

std::vector<std::vector<int>> SharedData::getCameraData() const {
    std::lock_guard<std::mutex> lock(mutex);
    return cameraData;
}

void SharedData::setSensorSum(int sum) {
    std::lock_guard<std::mutex> lock(mutex);
    sensorSum = sum;
}

int SharedData::getSensorSum() const {
    std::lock_guard<std::mutex> lock(mutex);
    return sensorSum;
}

void sensorTask(SharedData& sharedData, Sensors& sensor1, Sensors& sensor2) {
    int sum = 0;

    while (true) {
        sum += sensor1.data() + sensor2.data();
        std::this_thread::sleep_for(std::chrono::milliseconds(60));

        sum += sensor1.data() + sensor2.data();
        sharedData.setSensorSum(sum);
        
        sum = 0;
    }
}

void cameraTask(SharedData& sharedData, Camera& camera) {
    while (true) {
        auto data = camera.data();
        sharedData.setCameraData(data);
        std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }
}
