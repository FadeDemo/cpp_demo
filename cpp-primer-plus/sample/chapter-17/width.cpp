#include <iostream>

int main() {
    using std::cout;
    int w = cout.width(30);
    cout << "default field with = " << w << ":\n";
    cout.width(5);
    cout << "N"<< ':';
    cout.width(8);
    cout << "N * N" << ":\n";
    for (size_t i = 1; i <= 100; i *= 10) {
        cout.width(5);
        cout << i << ":";
        cout.width(8);
        cout << i * i << ":\n";
    }
    return 0;
}