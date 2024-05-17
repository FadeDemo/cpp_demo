//
// Created by fade on 2024/5/17.
//
#include "type_traits"
#include "tuple"

int main()
{
    std::tuple<bool, int> bi { true, 42};
    auto [b, i] = bi;
    static_assert(std::is_same_v<decltype(b), bool>);
    return 0;
}