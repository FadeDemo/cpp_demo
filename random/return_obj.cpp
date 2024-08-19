//
// Created by fade on 2024/8/19.
//
#include <iostream>

class Test {
public:
    int a;
    Test(int a) {
        this->a = a;
    }
};

Test test() {
    return Test(2);
}

int main()
{
    // error
//    test().a = 3;
    using std::cout;
    Test t = test();
    t.a = 3;
    cout << t.a << "\n";
    return 0;
}