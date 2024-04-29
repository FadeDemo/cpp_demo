//
// Created by fade on 2024/4/29.
//
#include "addspace.hpp"
#include "array"
#include "tuple"
#include "string"

template<typename T, std::size_t ... Idx>
void printByIdx(T t) {
    print(std::get<Idx>(t)...);
}

int main()
{
    std::array<std::string, 5> arr = {"hello", "my", "new", "!", "world"};
    printByIdx<std::array<std::string, 5>, 0, 4, 3>(arr);
    return 0;
}