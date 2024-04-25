//
// Created by fade on 2024/4/25.
//
#include <vector>
#include <string>
#include <iostream>
template<typename T>
class Stack {
    std::vector<T> elems;
public:
    Stack(T const & elem) : elems({elem}) {
        std::cout << "calling me" << "\n";
        elems.emplace_back(std::string("hello"));
    }
};

Stack(char const *) -> Stack<std::string>;

void test(char *) {}

int main()
{
//    Stack stringStack("bottom");
//    test("Hello");
    // 拷贝初始化的锅
//    Stack stringStack = "bottom";
    return 0;
}