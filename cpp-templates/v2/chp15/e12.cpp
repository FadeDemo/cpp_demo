//
// Created by fade on 2024/5/20.
//
template<typename T>
class S {
private:
    T a;
public:
    S(T b) : a(b) {

    }
};

template<typename T> S(T) -> S<T>;

S x{12};

S * p = &x;
S q = &x;
S r;
S s1(1), s2(2.0);