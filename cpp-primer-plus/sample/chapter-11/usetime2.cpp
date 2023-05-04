//
// Created by fade on 2023/5/3.
//
#include "mytime2.h"
#include <iostream>
int main()
{
    using std::cout;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;
    cout << "weeding time = ";
    weeding.Show();
    cout << "waxing time = ";
    waxing.Show();
    cout << "total work time = ";
    total = weeding + waxing;
    total.Show();
    diff = weeding - waxing;
    cout << "weeding time - waxing time = ";
    diff.Show();
    adjusted = total * 1.5;
    cout << "adjusted work time = ";
    adjusted.Show();
    return 0;
}