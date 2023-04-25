//
// Created by fade on 2023/4/25.
//
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;
    cout << "rats = " << rats
         << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats
         << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}