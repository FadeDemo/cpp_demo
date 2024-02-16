//
// Created by fade on 2024/2/16.
//

#ifndef CPP_DEMO_SPECIALIZATION_H
#define CPP_DEMO_SPECIALIZATION_H

template<typename T>
struct A
{
    void f(T);         // member, declared in the primary template

    void h(T) {}       // member, defined in the primary template

    template<class X1> // member template
    void g1(T, X1);

    template<class X2> // member template
    void g2(T, X2);
};

// specialization of a member
template<>
void A<int>::f(int);

template <>
struct A<int> {

};

#endif//CPP_DEMO_SPECIALIZATION_H
