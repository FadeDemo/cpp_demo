//
// Created by fade on 2024/5/8.
//
#include "type_traits"

template <int buf[5]>
class Lexer {
    static_assert(std::is_same_v<decltype(buf), int *>);
    static_assert(std::is_same_v<decltype(buf), int [5]>);
    static_assert(std::is_array_v<decltype(buf)>);
};