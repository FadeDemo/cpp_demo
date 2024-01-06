#ifndef EXC_MEAN_H
#define EXC_MEAN_H

#include <iostream>

class bad_hmean
{
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {}
    bad_hmean(const bad_hmean & b) {
        v1 = b.v1;
        v2 = b.v2;
        std::cout << "调用复制构造函数\n";
    }
    void mesg();
};

inline void bad_hmean::mesg() {
    std::cerr << "hmean(" << v1 << ", " << v2 << "): "
    << "invalid arguments: a = -b\n";
}

class bad_gmean
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}
    const char * mesg();
};

inline const char * bad_gmean::mesg() {
    return "gmean() arguments should be >= 0\n";
}

#endif