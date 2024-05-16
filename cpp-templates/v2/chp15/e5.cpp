//
// Created by fade on 2024/5/16.
//
#include "type_traits"

int main()
{
    int i = 42;
    int const & ref = i;
    auto x = ref;
    return 0;
}