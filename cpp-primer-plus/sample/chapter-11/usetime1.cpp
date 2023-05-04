//
// Created by fade on 2023/5/3.
//
#include "mytime1.h"
#include <iostream>
int main()
{
    using std::cout;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    cout << "planning time = ";
    planning.Show();
    cout << "coding time = ";
    coding.Show();
    cout << "fixing time = ";
    fixing.Show();
    total = coding + fixing;
    cout << "coding + fixing = ";
    total.Show();
    Time moreFixing(3, 28);
    cout << "more fixing time = ";
    moreFixing.Show();
    total = moreFixing.operator+(total);
    cout << "moreFixing.operator+(total) = ";
    total.Show();
    return 0;
}