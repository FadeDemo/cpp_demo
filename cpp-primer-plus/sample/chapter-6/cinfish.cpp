//
// Created by fade on 2023/4/22.
//
#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
    double fish[Max];
    cout << "Please enter the weights of your fish." << endl;
    cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]) {
        if (++i < Max) {
            cout << "fish #" << i + 1 << ": ";
        }
    }
    double total = 0.0;
    for (int j = 0; j < i; ++j) {
        total += fish[j];
    }
    if (i) {
        cout << total / i << " = average weight of "
             << i << " fish\n";
    } else {
        cout << "No fish\n";
    }
    cout << "Done.\n";
    return 0;
}