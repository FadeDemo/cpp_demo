//
// Created by fade on 2023/4/23.
//
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char c;
    while (cin.get(c)) {
        if (c == '@') {
            break;
        } else if (islower(c)) {
           cout.put(static_cast<char>(toupper(c)));
        } else if (isupper(c)) {
            cout.put(static_cast<char>(tolower(c)));
        } else if (isdigit(c)) {
            // do nothing
        } else {
            cout.put(c);
        }
    }
    return 0;
}