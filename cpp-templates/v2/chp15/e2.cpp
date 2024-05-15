//
// Created by fade on 2024/5/15.
//
#include "type_traits"
#include "utility"

int main()
{
    using RI = int&;
    int i = 42;
    RI const & rr = i;
    const RI & rrr = i;
    int const & a = i;
    int & const b = i;
//    std::pair<int &, int &> p;
    return 0;
}