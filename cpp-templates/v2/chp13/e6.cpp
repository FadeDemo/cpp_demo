//
// Created by fade on 2024/5/10.
//
template<typename X>
class Base {
    using T = int;
public:
    int basefield;
};

template<typename T>
class DD: public Base<T> {
public:
    void f() { this->basefield = 0; }
};

template<>
class Base<bool> {
public:
    enum  { basefield = 42 };
};

void g(DD<bool> & d) {
    d.f();
}