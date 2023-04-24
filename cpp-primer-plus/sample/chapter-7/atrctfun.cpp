//
// Created by fade on 2023/4/24.
//
#include <iostream>
#include "cmath"
struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};
polar rect_to_polar(rect);
void show_polar(polar);
int main()
{
    using namespace std;
    rect r_place {};
    polar p_place {};
    cout << "Enter the x and y values: ";
    while (cin >> r_place.x >> r_place.y) {
        p_place = rect_to_polar(r_place);
        show_polar(p_place);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}
polar rect_to_polar(rect xy) {
    using namespace std;;
    polar ans {};
    ans.distance = sqrt(xy.x * xy.x + xy.y * xy.y);
    ans.angle = atan2(xy.y, xy.x);
    return ans;
}
void show_polar(polar da) {
    using namespace std;
    const double Rad_to_dag = 57.29577951;
    cout << "distance = " << da.distance;
    cout << ", angle = " << da.angle * Rad_to_dag << " degrees.\n";
}