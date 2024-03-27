//
// Created by fade on 2024/2/24.
//
#include <iostream>

int main()
{
    struct std {};

//    std::cout << "fail\n"; // Error: unqualified lookup for 'std' finds the struct
    ::std::cout << "ok\n"; // OK: ::std finds the namespace std
}