//
// Created by fade on 2024/5/23.
//
#include "iostream"
#include "isdefaultconstructible1.hpp"
class A {
public:
    A() = delete;
};
int main()
{
    std::cout << IsDefaultConstructibleT<int>::value << "\n";
    std::cout << IsDefaultConstructibleT<A>::value;
    return 0;
}