//
// Created by fade on 2023/5/2.
//

#ifndef CPP_DEMO_STACK_H
#define CPP_DEMO_STACK_H
typedef unsigned long Item;
class Stack {
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item &);
    bool pop(Item &);
};
#endif //CPP_DEMO_STACK_H
