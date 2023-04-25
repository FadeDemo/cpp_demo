//
// Created by fade on 2023/4/25.
//
#include <iostream>
void swap_r(int &, int &);
void swap_p(int *, int *);
void swap_v(int, int);
int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    cout << "Using references to swap contents:\n";
    swap_r(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    cout << "Using pointers to swap contents again:\n";
    swap_p(&wallet1, &wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    cout << "Trying to use passing by value:\n";
    swap_v(wallet1, wallet2);
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    return 0;
}
void swap_r(int & a, int & b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
void swap_p(int * p, int * q) {
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
}
void swap_v(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
}