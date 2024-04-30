//
// Created by fade on 2024/4/30.
//
#include "type_traits"

void test(int&& x) {
    int y = 2;
//    static_assert(std::is_same_v<decltype(x), decltype(y)>);
//    static_assert(std::is_same_v<decltype(x), int &>);
}

int main()
{

    return 0;
}