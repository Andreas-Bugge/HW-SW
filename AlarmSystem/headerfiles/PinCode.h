#ifndef LOGIN_H
#define LOGIN_H

#include <iostream>
#include <thread>
#include <chrono>

class LogIn {
public:
    LogIn();
    ~LogIn();

    bool isValid(int P); 

    bool autoCheckPin();
};

#endif // LOGIN_H
