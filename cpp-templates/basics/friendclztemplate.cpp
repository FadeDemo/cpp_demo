//
// Created by fade on 2024/2/21.
//

template<typename T>
class Node;

template<typename T>
void test1();

//template<typename T>
//void multiply(T);

template<typename T>
class Tree {
    friend class Node<T>;
    friend class Factory;
    friend void test() {}
//    friend void test1<int>() {};
    template<class TT>
    friend void test2() {}
    friend void multiply(int) {}
//    friend void ::multiply(void*);
//    friend void ::multiply(int);
};

int main()
{

    return 0;
}