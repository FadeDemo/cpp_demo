//
// Created by fade on 2023/4/21.
//
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.') {
        if (ch == ' ') {
            ++spaces;
        }
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
}