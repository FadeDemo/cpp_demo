//
// Created by fade on 2024/4/29.
//
#include "addspace.hpp"
template<typename ...T>
void addOne(T const &... args) {
//    print(args + 1...);
    print(args + 1 ...);
    print((args + 1)...);
}