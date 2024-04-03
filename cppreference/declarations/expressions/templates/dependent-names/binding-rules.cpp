//
// Created by fade on 2024/4/3.
//
#include <iostream>

void g(double) { std::cout << "g(double)\n"; }

//void g(int) { std::cout << "g(int)\n"; }

template<class T>
struct S
{
    void f() const
    {
        g(1); // "g" is a non-dependent name, bound now
    }
};

//void g(double) { std::cout << "g(double)\n"; }

void g(int) { std::cout << "g(int)\n"; }

int main()
{
    g(1);  // calls g(int)

    S<int> s;
    s.f(); // calls g(double)
}