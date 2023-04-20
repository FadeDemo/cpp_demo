//
// Created by fade on 2023/4/20.
//
#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i = limit - 1;
    for (; i >= 0 ; --i) {
        cout << "i = " << i + 1 << "\n";
    }
    cout << "Done now that i = " << i + 1 << "\n";
    return 0;
}