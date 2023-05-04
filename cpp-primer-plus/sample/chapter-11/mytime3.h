//
// Created by fade on 2023/5/3.
//

#ifndef CPP_DEMO_MYTIME3_H
#define CPP_DEMO_MYTIME3_H
#include <iostream>
class Time {
    int hours;
    int minutes;
public:
    Time();
    Time(int, int m = 0);
    void AddMin(int);
    void AddHr(int);
    void Reset(int h = 0, int m = 0);
    Time operator +(const Time &) const;
    Time operator-(const Time &) const;
    Time operator*(double) const;
    friend Time operator*(double m, const Time & t) {
        return t * m;
    }
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
    void Show() const;
};
#endif //CPP_DEMO_MYTIME3_H
