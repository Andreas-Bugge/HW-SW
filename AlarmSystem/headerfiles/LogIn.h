#ifndef LOGIN_H
#define LOGIN_H

class LogIn {
public:
    LogIn();
    ~LogIn();

    bool isValid(int P); 

    int promptForPin();
};

#endif // LOGIN_H
