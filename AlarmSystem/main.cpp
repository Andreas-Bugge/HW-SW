#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>

//* Headerfiles
#include "headerfiles/LogIn.h"
#include "headerfiles/StateManagement.h"
#include "headerfiles/Sensors.h"
#include "headerfiles/Camera.h"
#include "headerfiles/SharedData.h"
#include "headerfiles/IntrusionDetector.h"

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    StateManagement stateManager;
    LogIn loginSystem;
    Sensors sensor1, sensor2;
    Camera camera;
    SharedData sharedData;
    IntrusionDetector intrusionDetector;

    std::cout << "Alarm system is active ? \n" << stateManager.isSystemActive() << "\n" << std::endl;


    //! System state: Inactive - logging in
    while (true) {
        int P = rand() % 10; 
        std::cout << "Generated pin: " << P << std::endl;

        if(loginSystem.isValid(P)) {
            std::cout << "Pin is valid. Activating alarm system." << std::endl;
            if(stateManager.activateSystem(true)) {
                break;
            }
        } else {
            std::cout << "Pin is invalid. System remains inactive." << std::endl;
        }
    }

    std::thread sensorThread(sensorTask, std::ref(sharedData), std::ref(sensor1), std::ref(sensor2));
    std::thread cameraThread(cameraTask, std::ref(sharedData), std::ref(camera));

    //! Systemstate: Active
    while (stateManager.isSystemActive()) {
        int sensorSum = sharedData.getSensorSum();
        auto cameraData = sharedData.getCameraData();

        if (intrusionDetector.checkForIntrusion(sharedData)) {
            std::cout << "Intrusion detected! Activating alarm." << std::endl;
            stateManager.activateAlarm();
            intrusionDetector.handleIntrusion(stateManager, loginSystem);
        } else {
            std::cout << "Ingen indtrængen detekteret." << std::endl;
        }
    

    //! Print statements for sensor- and camera data
    /*
    std::cout << "Sensor Sum: " << sensorSum << "\n";

    std::cout << "Camera Data:\n";
    for (const auto& row : cameraData) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n"; 
        std::this_thread::sleep_for(std::chrono::seconds(1));
    */
    }
    
    sensorThread.join();
    cameraThread.join();


    return 0;
}
