//
// Created by fade on 2024/5/13.
//
template<typename T>
class S {
public:
    void f() {}
};

template void S<int>::f();

int main()
{

    return 0;
}