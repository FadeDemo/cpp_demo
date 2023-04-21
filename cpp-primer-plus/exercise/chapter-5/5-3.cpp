//
// Created by fade on 2023/4/21.
//
#include <iostream>
int main()
{
    int sum = 0;
    int num;
    while ((std::cin >> num)) {
        if (num == 0) {
            break;
        }
        sum += num;
        std::cout << "So far, the sum has added to " << sum << std::endl;
    }
    return 0;
}