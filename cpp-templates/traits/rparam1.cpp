/* The following code example is taken from the book
 * "C++ Templates - The Complete Guide"
 * by David Vandevoorde and Nicolai M. Josuttis, Addison-Wesley, 2002
 *
 * (C) Copyright David Vandevoorde and Nicolai M. Josuttis 2002.
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 */
#include "rparam.hpp"
#include "rparamcls.hpp"

// function that allows parameter passing by value or by reference
template <typename T1, typename T2>
void foo (typename RParam<T1>::Type p1,
          typename RParam<T2>::Type p2)
{
    //...
}

int main()
{
    MyClass1 mc1;
    MyClass2 mc2;
    // 值传递会调用拷贝构造函数，所以会打印
    // MyClass2 copy constructor called
    foo<MyClass1,MyClass2>(mc1,mc2);
}
