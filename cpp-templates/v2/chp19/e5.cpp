//
// Created by fade on 2024/5/27.
//
class A;
A test();
void test1();
int main()
{
    decltype( test(), 1);
    decltype(1, test());
    decltype(test1(), 1);
    return 0;
}