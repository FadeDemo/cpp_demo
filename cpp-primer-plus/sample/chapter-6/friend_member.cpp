//
// Created by fade on 2024/3/27.
//
#include <iostream>

class B;

class A {
public:
    int Func1( B& b );

private:
    int Func2( B& b );
};

class B {
private:
    int _b;

    // A::Func1 is a friend function to class B
    // so A::Func1 has access to all members of B
    friend int A::Func1( B& );
public:
    void set_b(int b) { this->_b = b;}
};

int A::Func1( B& b ) { return b._b; }   // OK
int main()
{
    using std::cout;
    A a;
    B b;
    b.set_b(2);
    cout << a.Func1(b);
    return 0;
}