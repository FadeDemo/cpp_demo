//
// Created by fade on 2023/4/30.
//
#include "golf.h"
#include "iostream"
#include "limits"
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    golf ar[5];
    char fullname[40];
    int handicap {};
    int count = 0;
    for (auto & i : ar) {
        cout << "Please enter your name: ";
        if (cin.getline(fullname, 40) && fullname[0] != '\0') {
            cout << "Please enter your handicap: ";
            if (cin >> handicap) {
                ++count;
                cin.ignore();
                set_golf(i, fullname, handicap);
            } else {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
            }
        } else {
            break;
        }
    }
    for (int i = 0; i < count; ++i) {
        show_golf(ar[i]);
    }
    count = 0;
    for (auto & i : ar) {
        if (set_golf(i)) {
            cin.ignore();
            ++count;
        } else {
            break;
        }
    }
    for (int i = 0; i < count; ++i) {
        show_golf(ar[i]);
    }
    return 0;
}