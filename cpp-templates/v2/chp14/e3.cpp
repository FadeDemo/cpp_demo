//
// Created by fade on 2024/5/10.
//
template<typename T,int N>
class A {
    void unsafe(T (*p)[N]);
};
int main()
{
    A<int, -1> a;
    return 0;
}