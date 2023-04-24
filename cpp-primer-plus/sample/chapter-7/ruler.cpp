//
// Created by fade on 2023/4/24.
//
#include <iostream>
const int Len = 66;
const int Divs = 6;
void sub_divide(char [], int, int, int);
int main()
{
    char ruler[Len];
    for (int i = 1; i < Len - 2; ++i) {
        ruler[i] = ' ';
    }
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min {};
    ruler[min] = ruler[max] = '|';
    std::cout << ruler << std::endl;
    for (int i = 1; i <= Divs; ++i) {
        sub_divide(ruler, min, max, i);
        std::cout << ruler << std::endl;
        for (int j = 1; j < Len - 2; ++j) {
            ruler[j] = ' ';
        }
    }
    return 0;
}
void sub_divide(char ar[], int low, int high, int level) {
    if (level == 0) {
        return;
    }
    int mid = (high + low) / 2;
    ar[mid] = '|';
    sub_divide(ar, low, mid, level - 1);
    sub_divide(ar, mid, high, level - 1);
}