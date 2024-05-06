//
// Created by fade on 2024/5/6.
//
void f()
{
    if constexpr(false)
    {
        int i = 0;
        int *p = i; // Error even though in discarded statement
    }
}