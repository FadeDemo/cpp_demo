//
// Created by fade on 2024/4/29.
//
#include "cstddef"
#include "addspace.hpp"
#include "vector"
#include "string"
template<size_t... Idx, typename C>
void printIdx(C const & coll) {
    print(coll[Idx]...);
}

int main()
{
    using std::vector;
    using std::string;
    vector<string> coll = {"good", "times", "say", "bye"};
    printIdx<2, 0, 3>(coll);
    return 0;
}