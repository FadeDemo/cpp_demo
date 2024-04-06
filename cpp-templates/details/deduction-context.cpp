//
// Created by fade on 2024/4/6.
//
template<typename T>
void f1(T *);

template<typename E, int N>
void f2(E(&) [N]);

template<typename T1, typename T2, typename T3>
void f3(T1 (T2::*)(T3 *));

class S {
public:
    void f(double *);
};

void g(int *** ppp) {
    bool b[42];
    f1(ppp);
    f2(b);
    f3(&S::f);
}

int main()
{

    return 0;
}
