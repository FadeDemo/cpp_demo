//
// Created by fade on 2024/4/4.
//
// 例子
namespace N {
    class X {

    };
    template<int I>
    void select(X *){}
}
void g(N::X * xp) {
    // until C++20
    using N::select;

    select<3>(xp);
}
int main()
{

    return 0;
}