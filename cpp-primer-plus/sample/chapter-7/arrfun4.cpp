//
// Created by fade on 2023/4/23.
//
#include <iostream>
const int ArSize = 8;
int sum_arr(const int *, const int *);
int main()
{
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, cookies + 3);
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, cookies + ArSize);
    cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}
int sum_arr(const int * begin, const int * end) {
    int total = 0;
    for (const int * pt = begin ; pt != end ; pt++) {
        total += *pt;
    }
    return total;
}