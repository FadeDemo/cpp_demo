//
// Created by fade on 2024/5/10.
//
namespace N1
{
    struct S {};

    template<int X>
    void f(S);
}

namespace N2
{
    template<class T>
    void f(T t);
}

template<class T>
void f(T t);

void g(N1::S s)
{
    f<3>(s);     // C++20 前是语法错误（无限定查找找不到 f）
    N1::f<3>(s); // OK，有限定查找找到模板 'f'
//    N2::f<3>(s); // 错误： N2::f 不接收非类型模板形参
                //       N1::f 不能被找到，因为 ADL 仅适用于无限定名

    using N2::f;
    f<3>(s); // OK：无限定查找现在找到 N2::f，
            //     然后因为此名无限定所以 ADL 表态并找到 N1::f
}