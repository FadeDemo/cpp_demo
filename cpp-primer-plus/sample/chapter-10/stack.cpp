//
// Created by fade on 2023/5/2.
//
#include "stack.h"
Stack::Stack() {
    this->top = 0;
}
bool Stack::isEmpty() const {
    return !top;
}
bool Stack::isFull() const {
    return top == MAX;
}
bool Stack::push(const Item & item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    }
    return false;
}
bool Stack::pop(Item & item) {
    if (top > 0) {
        item = items[--top];
        return true;
    }
    return false;
}