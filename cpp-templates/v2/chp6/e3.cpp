//
// Created by fade on 2024/5/3.
//
#include "type_traits"
#include <string>
template<typename T>
void printR(T const & arg) {
    static_assert(std::is_same_v<decltype(arg), std::string const &>);
}

int main()
{
    printR(std::string("hi"));
    return 0;
}