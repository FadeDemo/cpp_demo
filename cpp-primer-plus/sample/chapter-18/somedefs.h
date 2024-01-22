//
// Created by fade on 2024/1/22.
//

#ifndef CPP_DEMO_SOMEDEFS_H
#define CPP_DEMO_SOMEDEFS_H

#include <iostream>
#include <functional>

template<typename T, typename F>
T use_f(T v, F f) {
    std::cout << "use first template" << std::endl;
    static int count = 0;
    count++;
    std::cout << " use_f count = " << count << ", &count = " << &count << std::endl;
    return f(v);
}

template<typename T>
T use_f(T v, std::function<T(T)> f) {
    std::cout << "use second template" << std::endl;
    static int count = 0;
    count++;
    std::cout << " use_f count = " << count << ", &count = " << &count << std::endl;
    return f(v);
}

class Fp {
    double z_;
public:
    explicit Fp(double z = 1.0) : z_(z) {}
    double operator()(double q) const { return z_ * q; }
};

class Fq {
    double z_;
public:
    explicit Fq(double z = 1.0) : z_(z) {}
    double operator()(double q) const { return z_ + q; }
};


#endif //CPP_DEMO_SOMEDEFS_H
