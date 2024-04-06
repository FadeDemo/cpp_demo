//
// Created by fade on 2024/4/6.
//
#include <iostream>

template<typename T>
int f(T) {
    return 1;
}

template<typename T>
int f(T *) {
    return 2;
}

int main()
{
    std::cout << f<int*>((int *)0) << std::endl;
    std::cout << f<int>((int *)0) << std::endl;
    std::cout << f(0) << std::endl;
    std::cout << f((int *)0) << std::endl;
    return 0;
}