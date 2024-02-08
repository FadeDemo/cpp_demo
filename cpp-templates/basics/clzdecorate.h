//
// Created by fade on 2024/2/8.
//

#ifndef CPP_DEMO_CLZDECORATE_H
#define CPP_DEMO_CLZDECORATE_H

template<typename Allocator>
class List {
    struct Allocator * allocator;
    class Allocator * p;
    friend class Allocator;
};

class Test {};

class Test1 {
    class Test * p;
};

template<int buf[5]>
void test() {
    int * a = buf;
}

#endif//CPP_DEMO_CLZDECORATE_H
