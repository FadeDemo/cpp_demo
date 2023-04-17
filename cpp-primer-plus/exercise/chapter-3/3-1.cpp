//
// Created by fade on 2023/4/17.
//
#include <iostream>
int main()
{
    using namespace std;
    int height;
    const int factor = 12;
    cout << "Please input your height(inch):___\b\b\b";
    cin >> height;
    cout << "You height is " << height / 12 << " foot(feet)"
         << " " << height % 12 << " inch(inches)" << endl;
    return 0;
}