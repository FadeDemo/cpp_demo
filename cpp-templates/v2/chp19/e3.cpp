//
// Created by fade on 2024/5/23.
//
#include "type_traits"
#include "utility"

int main()
{
    // std::declval<int>() is an xvalue
    // decltype(std::declval<int>()) is int &&
    static_assert(std::is_same_v<decltype(std::declval<int>()), int &&>);
    // + return what type
    static_assert(std::is_same_v<decltype(std::declval<int>() + std::declval<char>()), int>);
    return 0;
}