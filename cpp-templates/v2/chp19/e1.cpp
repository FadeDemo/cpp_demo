//
// Created by fade on 2024/5/23.
//
#include "addreference.hpp"
#include "type_traits"
int main()
{
    int && a = 2;
    static_assert(std::is_same_v<AddLValueReference<decltype(a)>, int &>);
    return 0;
}