//
// Created by fade on 2024/4/28.
//
#include <iostream>
template<typename T, typename... Types>
void print(T firstArg, Types... args) {
    std::cout << sizeof...(Types) << "\n";
    std::cout << sizeof...(args) << "\n";
}

int main()
{
    print(1, 2);
    return 0;
}