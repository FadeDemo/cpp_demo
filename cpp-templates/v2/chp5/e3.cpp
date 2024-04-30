//
// Created by fade on 2024/4/30.
//
#include "type_traits"
void test(int && a) {
    int & b = a;
    static_assert(std::is_same_v<decltype(b), int &>);
}