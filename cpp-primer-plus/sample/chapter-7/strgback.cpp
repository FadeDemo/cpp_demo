//
// Created by fade on 2023/4/24.
//
#include <iostream>
char * build_str(char, int);
int main()
{
    using namespace std;
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char * ps = build_str(ch, times);
    cout << ps << endl;
    delete [] ps;
    ps = build_str('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;
    return 0;
}
char * build_str(char c, int n){
    char * str = new char[n + 1];
    str[n] = '\0';
    while (n-- > 0) {
        str[n] = c;
    }
    return str;
}