//
// Created by fade on 2023/4/21.
//
#include <iostream>
int main()
{
    int i, j;
    using namespace std;
    cin >> i >> j;
    int sum = 0;
    for (int k = i ; k <= j ; ++k) {
        sum += k;
    }
    cout << "sum of " << i << "~" << j << " is: " << sum << endl;
    return 0;
}