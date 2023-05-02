//
// Created by fade on 2023/5/2.
//
#include "mytime0.h"
#include <iostream>
int main()
{
    using std::cout;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    cout << "Planning time = ";
    planning.Show();
    cout << "Coding time = ";
    coding.Show();
    cout << "Fixing time = ";
    fixing.Show();
    total = coding.sum(fixing);
    cout << "coding.sum(fixing) = ";
    total.Show();
    return 0;
}