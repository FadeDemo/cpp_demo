//
// Created by fade on 2023/5/3.
//

#ifndef CPP_DEMO_MYTIME2_H
#define CPP_DEMO_MYTIME2_H
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
    void Show() const;
};
#endif //CPP_DEMO_MYTIME2_H
