//
// Created by fade on 2024/6/7.
//
#include <iostream>

class NonEmptyBase1 {
    int a;  // 4 bytes (assuming sizeof(int) is 4 bytes)
};

class NonEmptyBase2 {
    double b;  // 8 bytes (assuming sizeof(double) is 8 bytes)
};

class EmptyBase {
    // Empty class, no members
};

class ClassC : public NonEmptyBase2, public EmptyBase {
    // Inherits NonEmptyBase2 and EmptyBase
    // Size should be 8 (from NonEmptyBase2)
};

class ClassB : public NonEmptyBase1, public ClassC {
    // Inherits NonEmptyBase1 and ClassC
    // Size should be 4 (NonEmptyBase1) + 8 (ClassC) = 12 (without considering alignment)
};

class ClassA : public NonEmptyBase1, public ClassB {
    // Inherits NonEmptyBase1 and ClassB
    // Size should be 4 (NonEmptyBase1) + 12 (ClassB) = 16 (without considering alignment)
};

int main() {
    std::cout << "Size of NonEmptyBase1: " << sizeof(NonEmptyBase1) << '\n';
    std::cout << "Size of NonEmptyBase2: " << sizeof(NonEmptyBase2) << '\n';
    std::cout << "Size of EmptyBase: " << sizeof(EmptyBase) << '\n';
    std::cout << "Size of ClassC: " << sizeof(ClassC) << '\n';
    std::cout << "Size of ClassB: " << sizeof(ClassB) << '\n';
    std::cout << "Size of ClassA: " << sizeof(ClassA) << '\n';
    return 0;
}
