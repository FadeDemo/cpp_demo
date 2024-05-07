//
// Created by fade on 2024/5/7.
//
#include "type_traits"
int main()
{
    int i = 2;
    int & a = i;
    static_assert(std::is_same_v<std::remove_const_t<int const &>, int const &>);
    return 0;
}