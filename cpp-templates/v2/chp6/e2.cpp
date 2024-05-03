//
// Created by fade on 2024/5/3.
//
#include "type_traits"

template<typename T>
void printV(T arg) {
    static_assert(std::is_same_v<T, char const *>);
}

template<typename T>
void printV1(T arg) {
    static_assert(std::is_same_v<T, int const *>);
}

template<typename T>
void printV2(T arg) {
    static_assert(std::is_same_v<T, int const *>);
}

int main()
{
    printV("hi");
    const int a[5] = {1, 5, 6};
    printV1(a);
    int const * b = new int;
    printV2(b);
    delete b;
    return 0;
}