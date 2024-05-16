//
// Created by fade on 2024/5/16.
//
#include "initializer_list"
int main()
{
    auto primes = { 2, 3, 5, 7 };
//    auto primes2 { 2, 3, 5, 7 };
    auto primes1 { 2 };
    return 0;
}

auto subtleError() {
    return {1, 2, 3};
}