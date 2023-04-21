//
// Created by fade on 2023/4/21.
//
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    while ((ch = cin.get()) != EOF) {
        cout.put(ch);
        ++count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}