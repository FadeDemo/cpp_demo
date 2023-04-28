//
// Created by fade on 2023/4/28.
//
#include <iostream>
#include "coordin"
using namespace std;
int main()
{
    rect r_place;
    polar p_place;
    cout << "Enter the x and y values: ";
    while (cin >> r_place.x >> r_place.y) {
        p_place = rect_to_polar(r_place);
        show_polar(p_place);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Bye!" << endl;
    return 0;
}