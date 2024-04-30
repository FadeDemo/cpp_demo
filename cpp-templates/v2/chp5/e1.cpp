//
// Created by fade on 2024/4/30.
//
template<typename T>
class Base {
public:
    void bar();
};

template<typename T>
class Derived: Base<T> {
public:
    void foo() {
        bar();
    }
};