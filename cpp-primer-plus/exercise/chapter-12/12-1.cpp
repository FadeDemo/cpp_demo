//
// Created by fade on 2023/5/5.
//
#include "Cow.h"
int main()
{
    Cow cow = Cow("fade", "drink water", 20);
    Cow a("test", "eat grass", 20);
    Cow b = a;
    b.ShowCow();
    Cow c;
    c = a;
}