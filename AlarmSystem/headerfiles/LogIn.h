#ifndef LOGIN_H
#define LOGIN_H

class LogIn {
public:
    LogIn(); // Constructor
    ~LogIn(); // Destructor

    bool valid(int P);
    void activateSystem(int P);

private:
    bool active;
};

#endif // LOGIN_H