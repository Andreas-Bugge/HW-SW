#ifndef LCG_H
#define LCG_H

class LCG {
public:
    LCG();
    void seed(unsigned int seed);
    unsigned int next();

private:
    unsigned long a, c, m, current;
};

#endif