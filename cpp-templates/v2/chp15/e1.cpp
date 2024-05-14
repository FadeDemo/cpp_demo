//
// Created by fade on 2024/5/14.
//
#include "array"
#include "iostream"
template<char... cs>
int operator""_fi() {
    int ans = 0;
    std::array<char, sizeof...(cs)> chars{cs...};
    for (char c: chars) {
        std::cout << "'" << c << "' ";
        ans = ans * 10 + int(c - '0');
    }
    std::cout << "\n";
    return ans;
}

int main()
{
    int a = 127_fi;
    std::cout << a;
    return 0;
}