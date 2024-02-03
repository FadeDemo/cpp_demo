//
// Created by fade on 2024/2/2.
//
template<typename T>
class Base {
public:
    void exit() {}
};

template<typename T>
class Derived : Base<T> {
public:
    void foo() {
//        Base<T>::exit();
//        exit();
        this->exit();
    }
};

template<typename T>
class Derived1 : Base<int> {
public:
    void foo() {
        exit();
    }
};

class Derived2 : Base<int> {
public:
    void foo() {
        exit();
    }
};

template<typename T>
class Derived3 : public Base<T> {
public:
    void foo() {
        //        Base<T>::exit();
        //        exit();
        this->exit();
    }
};