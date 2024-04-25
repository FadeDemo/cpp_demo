//
// Created by fade on 2024/4/25.
//
#include <vector>
template<typename T>

class Stack {
    std::vector<T> elems;
public:
    Stack(T const & elem) : elems({elem}) {}
};

int main()
{
    Stack intStack = 0;
    return 0;
}