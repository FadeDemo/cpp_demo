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
void rect_to_polar(const rect *, polar *);
void show_polar(const polar *);
int main()
{
    using namespace std;
    rect r_place {};
    polar p_place {};
    cout << "Enter the x and y values: ";
    while (cin >> r_place.x >> r_place.y) {
        rect_to_polar(&r_place, &p_place);
        show_polar(&p_place);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}
void rect_to_polar(const rect * xy, polar * ans) {
    using namespace std;
    ans->distance = sqrt(xy->x * xy->x + xy->y * xy->y);
    ans->angle = atan2(xy->y, xy->x);
}
void show_polar(const polar * da) {
    using namespace std;
    const double Rad_to_dag = 57.29577951;
    cout << "distance = " << da->distance;
    cout << ", angle = " << da->angle * Rad_to_dag << " degrees.\n";
}