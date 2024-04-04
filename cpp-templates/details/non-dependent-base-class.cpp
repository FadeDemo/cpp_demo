//
// Created by fade on 2024/4/4.
//
template<typename X>
class Base {
public:
    int basefield;
    typedef int T;
};

class D1 : public Base<Base<void>> {
public:
    void f() { basefield = 3; }
};

template<typename T>
class D2 : public Base<double> {
public:
    void f() { basefield = 7; }
    T strange;
};

//void g(D2<int *> & d2, int * p) {
//    d2.strange = p;
//}

int main()
{

    return 0;
}