//
// Created by fade on 2023/4/27.
//
#include <iostream>
#include "cctype"
using namespace std;
void toupper(string &);
int main()
{
    string str;
    cout << "Enter a string (q to quit): ";
    while (getline(cin, str)) {
        if (str[0] == 'q') {
            break;
        }
        toupper(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
    }
    cout << "Bye." << endl;
    return 0;
}
void toupper(string & str) {
    for (char & i : str) {
        i = char(toupper(i));
    }
}