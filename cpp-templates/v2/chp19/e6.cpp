//
// Created by fade on 2024/5/28.
//
#include "isclass.hpp"
class Test {

};
int main()
{
    static_assert(IsClassT<Test>::value);
    return 0;
}