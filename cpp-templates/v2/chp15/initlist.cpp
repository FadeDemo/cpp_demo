//
// Created by fade on 2024/5/14.
//
#include "initializer_list"

template<typename T>
void f(std::initializer_list<T>) {}

int main()
{
    f({2, 3, 5, 7, 9});
//    f({'a', 'e', 'i', 'o', 'u', 42});
    return 0;
}