//
// Created by fade on 2024/5/1.
//
#include "iostream"

template<typename T>
class MyClass {
public:
    static constexpr int max = 1000;
};

// 确实重新初始化了
// 因为已经隐式实例化MyClass<int>了
template<>
constexpr int MyClass<int>::max = 2000;

template<>
constexpr int MyClass<float>::max = 2000;

template<>
class MyClass<double> {
public:
    static constexpr double max = 1000.21;
};

template<typename T>
int myMax = MyClass<T>::max;

int main()
{
    std::cout << myMax<double> << "\n";
    return 0;
}