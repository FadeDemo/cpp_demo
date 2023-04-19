//
// Created by fade on 2023/4/19.
//
#include <iostream>
#include "cstring"
using namespace std;
char * get_name();
int main()
{
    char * name;
    name = get_name();
    cout << name << " at " << (int *) name << "\n";
    delete [] name;
    name = get_name();
    cout << name << " at " << (int *) name << "\n";
    delete [] name;
    return 0;
}
char * get_name() {
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}