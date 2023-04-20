//
// Created by fade on 2023/4/20.
//
#include <iostream>
const int ArSize = 20;
int main()
{
    using namespace std;
    char name[ArSize];
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized: \n";
    int i = 0;
    while (name[i] != '\0') {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
}