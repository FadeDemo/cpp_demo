//
// Created by fade on 2024/4/28.
//
#include <iostream>
template<typename T, typename... Types>
void print(T firstArg, Types... args) {
    std::cout << firstArg << "\n";
    if constexpr (sizeof...(args) > 0) {
        print(args...);
    }
}

int main()
{
    print(1, 2);
    return 0;
}