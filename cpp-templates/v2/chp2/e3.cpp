//
// Created by fade on 2024/4/26.
//
#include <string>
template<typename T>
struct ValueWithComment
{
    T value;
    std::string comment;
};
// until C++20
ValueWithComment(char const *, char const *) -> ValueWithComment<std::string>;
ValueWithComment vc = {"hello", "initial value"};