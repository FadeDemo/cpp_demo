//
// Created by fade on 2024/5/17.
//
#include "type_traits"

auto f() -> int(&)[2];

int main()
{
    static_assert(std::is_same_v<decltype(f()), int(&)[2]>);
    auto [x, y] = f();
    auto e = f();
    auto & [r, s] = f();
    auto & g = f();
    static_assert(std::is_same_v<decltype((g)), int(&)[2]>);
    static_assert(std::is_same_v<std::remove_reference_t<decltype((g))>, int [2]>);
    return 0;
}