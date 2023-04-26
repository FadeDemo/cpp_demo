//
// Created by fade on 2023/4/26.
//
#include <iostream>

template<typename T>
void Swap(T &, T &);

template<typename T>
void Swap(T *, T *, int);
void Show(int []);
const int Lim = 8;
int main()
{
    using namespace std;
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << ".\n";
    int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
    cout << "Original arrays:\n";
    Show(d1);
    Show(d2);
    Swap(d1, d2, Lim);
    cout << "Swapped arrays:\n";
    Show(d1);
    Show(d2);
    return 0;
}

template<typename T>
void Swap(T a[], T b[], int n) {
    T temp;
    for (int i = 0; i < n; ++i) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
void Show(int a[]) {
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < Lim; ++i) {
        cout << a[i];
    }
    cout << endl;
}
template<typename T>
void Swap(T & a, T & b) {
    a = a + b;
    b = a - b;
    a = a - b;
}