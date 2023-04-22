//
// Created by fade on 2023/4/22.
//
#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    for (int i = 0; i < Max; ++i) {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Please enter a number: ";
        }
    }
    double total = 0.0;
    for (int i : golf) {
        total += i;
    }
    cout << total / Max << " = average score "
         << Max << " rounds" << endl;
    return 0;
}