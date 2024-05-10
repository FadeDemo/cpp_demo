//
// Created by fade on 2024/5/10.
//
template<typename X>
class Base {
    using T = int;
public:
    int basefield;
};

class D1: public Base<Base<void>> {
public:
    void f() { basefield = 3; }
};

template<typename T>
class D2 : public Base<double> {
public:
    void f() { basefield = 7; }
    T strange;

};

int main()
{
    D2<double> d;
    return 0;
}