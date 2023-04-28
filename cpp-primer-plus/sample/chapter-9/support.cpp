//
// Created by fade on 2023/4/28.
//
#include <iostream>
extern double warming;
void update(double);
void local();
using std::cout;
void update(double dt) {
    extern double warming;
    warming += dt;
    cout << "Updating global warming to " << warming;
    cout << " degrees." << std::endl;
}
void local() {
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees." << std::endl;
    cout << "But global warming = " << ::warming;
    cout << " degrees." << std::endl;
}