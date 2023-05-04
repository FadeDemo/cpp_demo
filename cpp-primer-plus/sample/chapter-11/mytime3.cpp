//
// Created by fade on 2023/5/3.
//

#include "mytime3.h"
//
// Created by fade on 2023/5/3.
//

#include "mytime3.h"
#include <iostream>
Time::Time() {
    hours = minutes = 0;
}
Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}
void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}
void Time::AddHr(int h) {
    hours += h;
}
void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}
Time Time::operator+(const Time & t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours;
    sum.hours += sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
Time Time::operator-(const Time & t) const {
    Time diff;
    int total1 = t.minutes + 60 * t.hours;
    int total2 = this->minutes + 60 * this->hours;
    diff.minutes = (total2 - total1) % 60;
    diff.hours = (total2 - total1) / 60;
    return diff;
}
Time Time::operator*(double mult) const {
    Time result;
    long totalMinutes = hours * mult * 60 + minutes * mult;
    result.hours = totalMinutes / 60;
    result.minutes = totalMinutes % 60;
    return result;
}
std::ostream & operator<<(std::ostream & os, const Time & t) {
    return os << t.hours << " hours, " << t.minutes << " minutes." << std::endl;
}
void Time::Show() const {
    std::cout << hours << " hours, " << minutes << " minutes." << std::endl;
}