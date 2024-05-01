//
// Created by fade on 2024/5/1.
//
#include "iostream"

template<typename T>
constexpr T pi {3.1415926535897932385};

template<typename T = long double>
T PI {3.1415926535897932385};

int main()
{
    // not allowed
//    std::cout << PI << "\n";
    std::cout << PI<> << "\n";
    return 0;
}