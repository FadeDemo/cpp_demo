//
// Created by fade on 2024/5/16.
//
#include "type_traits"
#include "string"

void g(std::string && s) {
    static_assert(std::is_lvalue_reference_v< decltype(s)>);
    static_assert(std::is_rvalue_reference_v< decltype(s)>);
    static_assert(std::is_same_v<decltype(s), std::string &>);
    static_assert(std::is_same_v<decltype(s), std::string &&>);
    static_assert(std::is_lvalue_reference_v<decltype((s))>);
    static_assert(std::is_rvalue_reference_v<decltype((s))>);
    static_assert(std::is_same_v<decltype((s)), std::string &>);
    static_assert(std::is_same_v<decltype((s)), std::string &&>);
}

int main()
{

    return 0;
}