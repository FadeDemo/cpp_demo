//
// Created by fade on 2023/5/2.
//

#ifndef CPP_DEMO_MYTIME0_H
#define CPP_DEMO_MYTIME0_H
class Time {
    int hours;
    int minutes;
public:
    Time();
    Time(int, int m = 0);
    void AddMin(int);
    void AddHr(int);
    void Reset(int h = 0, int m = 0);
    Time sum(const Time &) const;
    void Show() const;
};
#endif //CPP_DEMO_MYTIME0_H
