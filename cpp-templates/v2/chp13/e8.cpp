//
// Created by fade on 2024/5/10.
//
class NonDep {
public:
    using Type = int;
};

template<typename T>
class Dep {
public:
    using OtherType = T;
};

template<typename T>
class DepBase : public NonDep, public Dep<T> {
public:
    void f() {
        typename DepBase<T>::Type t;
        typename DepBase<T>::OtherType * ot;
    }
};

int main()
{
    DepBase<int> d;
    d.f();
    return 0;
}