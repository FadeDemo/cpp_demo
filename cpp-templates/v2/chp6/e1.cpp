//
// Created by fade on 2024/5/2.
//
#include "type_traits"
template<typename T>
typename std::enable_if<(sizeof(T) > 4)>::type foo() {

}

template<typename T>
std::enable_if_t<(sizeof(T) > 4)> bar() {

}