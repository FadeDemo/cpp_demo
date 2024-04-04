//
// Created by fade on 2024/4/2.
//
#include "iostream"
namespace A
{
    namespace N
    {
        void f();
        int i = 3; // found 3rd (if 2nd is not present)
    }

    int i = 4;     // found 4th (if 3rd is not present)
}

int i = 5;         // found 5th (if 4th is not present)

void A::N::f()
{
    int i = 2;     // found 2nd (if 1st is not present)

    while (true)
    {
        int i = 1;  // found 1st: lookup is done
        std::cout << i;
    }
}

// int i;          // not found

namespace A
{
    namespace N
    {
        // int i;  // not found
    }
}

int main()
{

    return 0;
}