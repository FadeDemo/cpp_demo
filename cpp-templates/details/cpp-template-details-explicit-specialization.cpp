#include <iostream>
//
// Created by fade on 2024/4/7.
//
template<typename T>
class Types {
public:
    typedef int I;
};

template<typename T, typename U = typename Types<T>::I>
class S {
    static int code;
};

template<>
class S<void> {
public:
    void f();
};

template <>
int S<bool>::code;

template<> class S<char, char>;

//template<> class S<char, 0>;

template<typename T>
int f(T, T x = 42) {
    return x;
}

// not allowed
//template<> int f(int, int x = 35) {
//    return x / 2;
//}

template<> int f(int, int x) {
    return x / 2;
}

int main()
{
    // 指针没右new的话是没用到模板的定义的
    S<int> * pi;
//    S<int> e1;
    S<void> * pv;
    S<void, int> sv;
//    S<void, char> e2;
//    S<char, char> e3;
    std::cout << f(0);
    return 0;
}

template<>
class S<char, char> {

};

template<typename T>
class Invalid {};

// not allowed
//Invalid<double> x1;

// not allowed
//template class Invalid<double>;

template<> class Invalid<double> {};

//template class Invalid<double>;

//Invalid<double> x1;