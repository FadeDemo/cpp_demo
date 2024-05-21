//
// Created by fade on 2024/5/20.
//
#include "string"
#include "type_traits"
template<typename T>
struct Y {
    Y(T const &);
    Y(T &&);
};

void g(std::string s) {
    Y y = s;
    static_assert(std::is_same_v<decltype(y), Y<std::string>>);
}

int main()
{

    return 0;
}