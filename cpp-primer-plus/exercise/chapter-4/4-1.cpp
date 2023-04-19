//
// Created by fade on 2023/4/19.
//
#include <iostream>
int main()
{
    char first_name[90];
    char last_name[90];
    char grade;
    int age;
    using namespace std;
    cout << "What is your first name? ";
    cin.getline(first_name, 90);
    cout << "What is your last name? ";
    cin.getline(last_name, 90);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << last_name << ", " << first_name << endl
         << "Grade: " << char(grade + 1) << endl
         << "Age: " << age << endl;
    return 0;
}