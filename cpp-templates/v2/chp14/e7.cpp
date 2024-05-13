//
// Created by fade on 2024/5/13.
//
#include "type_traits"

int main()
{
    static_assert(std::is_same_v<decltype(7), int>);
    return 0;
}