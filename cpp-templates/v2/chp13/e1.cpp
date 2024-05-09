//
// Created by fade on 2024/5/9.
//
namespace A
{
    struct X {};
    struct Y {};

    void f(int);
    void g(X);
}

namespace B
{
    void f(int i)
    {
        f(i); // Calls B::f (endless recursion)
    }

    void g(A::X x)
    {
//        g(x); // Error: ambiguous between B::g (ordinary lookup)
                //        and A::g (argument-dependent lookup)
        (g)(x);
    }

    void h(A::Y y)
    {
        h(y); // Calls B::h (endless recursion): ADL examines the A namespace
                // but finds no A::h, so only B::h from ordinary lookup is used
    }
}