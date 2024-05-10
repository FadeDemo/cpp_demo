//
// Created by fade on 2024/5/10.
//
template<typename T>
class B {
public:
    enum E { e1 = 6, e2 = 28, e3 = 496 };
    virtual void zero(E e = e1);
    virtual void one(E &);
};

template<typename T>
class D : public B<T> {
public:
    void f() {
        typename D<T>::E e;
//        E e;
        this->zero();
        one(e);
    }
};