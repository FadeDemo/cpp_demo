//
// Created by fade on 2024/5/9.
//
template<int N>
struct I {

};

template<int M, int N>
void f(I<M+N>);

template<int N, int M>
void f(I<N+M>);

template<int M, int N>
void f(I<N+M>);

int main()
{

    return 0;
}