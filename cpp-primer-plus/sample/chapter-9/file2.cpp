//
// Created by fade on 2023/4/28.
//
#include <iostream>
#include "cmath"
#include "coordin"
polar rect_to_polar(rect xy) {
    using namespace std;
    polar answer {};
    answer.distance = sqrt(xy.x * xy.x + xy.y * xy.y);
    answer.angle = atan2(xy.y, xy.x);
    return answer;
}
void show_polar(polar p) {
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << p.distance
         << ", angle = " << p.angle * Rad_to_deg
         << " degree." << endl;
}