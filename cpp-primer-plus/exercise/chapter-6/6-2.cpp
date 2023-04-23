//
// Created by fade on 2023/4/23.
//
#include <iostream>
int main()
{
    double ar[10] {};
    double average = 0;
    int count = 0;
    int i = 0;
    for ( ; std::cin >> ar[i] ; ++i) {
        average += ar[i];
    }
    for (int j = 0; j <= i; ++j) {
        if (ar[j] > average / i) {
            ++count;
        }
    }
    std::cout << "Average: " << average / i << std::endl
              << "There is(are) " << i << " number(s) in the array." << std::endl
              << "There is(are) " << count << " number(s) bigger than the average." << std::endl;
    return 0;
}