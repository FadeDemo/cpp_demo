//
// Created by fade on 2024/2/16.
//

#include <type_traits>
template<typename T>
class C {
    static_assert(std::is_default_constructible<T>::value, "T should be default-constructible");
};

class Test {
public: // 注释会报错
    Test() = default;
};

int main()
{
    C<Test> c;
    return 0;
}