//
// Created by fade on 2024/5/10.
//
template<typename T>
class C {
    using Type = T;
    struct I {
        C * c;
        C<Type> * c2;
        I * i;
    };
    struct J {
        C* c;
        C<Type > * c2;
        I * i;
    };
};
int main()
{
    C<int> c;
    return 0;
}