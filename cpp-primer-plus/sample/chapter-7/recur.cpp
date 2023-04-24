//
// Created by fade on 2023/4/24.
//
#include <iostream>
void count_down(int);
int main()
{
    count_down(4);
    return 0;
}
void count_down(int n) {
    using namespace std;
    cout << "Counting down ... " << n << endl;
    if (n > 0) {
        count_down(n - 1);
    }
    cout << n << ": Kaboom!\n";
}