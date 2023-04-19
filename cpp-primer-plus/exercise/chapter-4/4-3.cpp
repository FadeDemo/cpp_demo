//
// Created by fade on 2023/4/19.
//
#include <iostream>
#include "cstring"
int main()
{
    char first_name[80];
    char last_name[80];
    char name[162];
    using namespace std;
    cout << "Enter your first name: ";
    cin.getline(first_name, 80);
    cout << "Enter your last name: ";
    cin.getline(last_name, 80);
    strncpy(name, last_name, strlen(last_name));
    strncat(name, ", ", 2);
    strncat(name, first_name, strlen(first_name));
    cout << "Here's the information in a single string: " << name << endl;
    return 0;
}