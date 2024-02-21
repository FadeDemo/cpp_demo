//
// Created by fade on 2024/2/19.
//
#include <list>

template <typename T>
class List {

};

typedef struct {
    double x, y, z;
} Point;

typedef enum { red, green, blue } * ColorPtr;

template<typename T, T nontype_param>
class C {};

class X {
public:
    int n;
};

X x;

//C<int *, &x.n> c;
C<int X::*, &X::n> c1;

template<typename T>
void templ_func();

C<void(), &templ_func<double>> c5;
C<void (*)(), &templ_func<double>> c6;
C<int *, nullptr> c7;

class Derived : public X {

} derived_obj;

//C<X *, &derived_obj> err1;

//C<int&, x.n> err2;

int a[10];
//C<int *, &a[0]> err3; // available in c++ 20

template<typename T1, typename T2, template<typename> class Container>
class Relation {
    Container<T1> dom1;
    Container<T2> dom2;
};

Relation<int, double, std::list> rel;

int main()
{
    struct Association {
        int * p;
        int * q;
    };
    List<Association*> error1;
    List<ColorPtr> error2;
    List<Point > ok;
    return 0;
}