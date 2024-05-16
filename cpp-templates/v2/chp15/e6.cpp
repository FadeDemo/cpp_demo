//
// Created by fade on 2024/5/16.
//
template<decltype(auto) Val>
class S {

};

int main()
{
    static int v = 42;
    S<v> sv;
    return 0;
}