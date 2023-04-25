//
// Created by fade on 2023/4/25.
//
#include <iostream>
double cube(double);
double ref_cube(double &);
int main()
{
    using namespace std;
    double x = 3.0;
    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << ref_cube(x);
    cout << " = cube of " << x << endl;
    return 0;
}
double cube(double x) {
    x = x * x;
    return x;
}
double ref_cube(double & x) {
    x = x * x;
    return x;
}
