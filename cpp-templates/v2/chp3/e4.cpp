//
// Created by fade on 2024/4/27.
//
#include <iostream>
template<decltype(auto) N>
class C {

};

int i;

// not allowed
//C<i> x;

C<(i)> x;

int main()
{
    std::cout << i << "\n";
    int j;
    // not allowed
//    C<(j)> j;
    return 0;
}