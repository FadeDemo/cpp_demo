//
// Created by fade on 2024/4/8.
//
template<class T1>
struct A
{
    template<class T2>
    struct B
    {
        template<class T3>
        void mf();
    };
};

template<>
struct A<int> {
    template<class T2>
    struct B
    {
        template<class T3>
        void mf();
    };
};

template<>
struct A<int>::B<double>;