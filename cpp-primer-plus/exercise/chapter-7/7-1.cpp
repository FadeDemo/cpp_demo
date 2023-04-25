//
// Created by fade on 2023/4/25.
//
#include <iostream>
double calc_harmonic_average(double, double);
int main()
{
    using namespace std;
    int x, y;
    cout << "Please enter two numbers (0 to quit): ";
    while (cin >> x >> y) {
        if (!x || !y) {
            break;
        }
        cout << "Harmonic average of " << x << " and "
             << y << " is " << calc_harmonic_average(x, y) << ".\n";
        cout << "Please enter another two numbers (0 to quit): ";
    }
    return 0;
}
double calc_harmonic_average(double x, double y) {
    return 2.0 * x * y / (x + y);
}