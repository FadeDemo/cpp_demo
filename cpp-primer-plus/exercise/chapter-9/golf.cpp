//
// Created by fade on 2023/4/30.
//

#include "golf.h"
#include "cstring"
#include <iostream>
void set_golf(golf & g, const char * name, int hc) {
    auto len = std::min(strlen(name), sizeof g.fullname - 1);
    strncpy(g.fullname, name, len);
    g.fullname[len] = '\0';
    g.handicap = hc;
}
int set_golf(golf & g) {
    using std::cin;
    using std::cout;
    cout << "Please enter your name: ";
    if (cin.getline(g.fullname, 40) && g.fullname[0] != '\0') {
        cout << "Please enter your handicap: ";
        return bool(cin >> g.handicap);
    }
    return 0;
}
void show_golf(const golf & g) {
    using std::cout;
    using std::endl;
    cout << g.fullname << "'s handicap is " << g.handicap << "." << endl;
}