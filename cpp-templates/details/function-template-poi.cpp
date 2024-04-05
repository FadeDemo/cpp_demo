//
// Created by fade on 2024/4/5.
//
class MyInt {
public:
    MyInt(int i) {};
};

MyInt operator -(MyInt const &);

bool operator > (MyInt const &, MyInt const &);

typedef MyInt Int;

template<typename T>
void f(T i) {
    if (i > 0) {
        g(-i);
    }
}

template <>
void f(int i) {

}

template void f(int);

void g(Int) {
//    f<Int>(42);
}

int main()
{

    return 0;
}