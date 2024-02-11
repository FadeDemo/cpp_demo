//
// Created by fade on 2024/2/8.
//

//template<template<typename X> struct C>

template <typename T = int>
void test(T t) {

}

int main()
{
    class Test {

    };
    test(Test());
    return 0;
}