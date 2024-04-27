//
// Created by fade on 2024/4/27.
//
template<auto Val, typename T = decltype(Val)>
void foo() {}

int main()
{
    foo<5>();
    foo<'a'>();
    return 0;
}