//
// Created by fade on 2023/4/28.
//
#include <iostream>
using namespace std;
double warming = 0.3;
void update(double);
void local();
int main()
{
    cout << "Global warming is " << warming << " degrees." << endl;
    update(0.1);
    cout << "Global warming is " << warming << " degrees." << endl;
    local();
    cout << "Global warming is " << warming << " degrees." << endl;
    return 0;
}