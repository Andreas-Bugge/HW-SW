#ifndef LOGIN_H
#define LOGIN_H

class LogIn {
public:
    LogIn();
    ~LogIn();

    bool valid(int P); 
    void activateSystem(int P); 
    bool isActive(); 

private:
    bool active; // Holds the state of the system
};

#endif // LOGIN_H
