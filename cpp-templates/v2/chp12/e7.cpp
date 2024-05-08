//
// Created by fade on 2024/5/8.
//
#include "type_traits"
template<typename Func, typename T>
void apply(Func funcPtr, T x) {
    funcPtr(x);
}

template<typename T>
void single(T);

template<typename T>
void multi(T);

template<typename T>
void multi(T *) {

};

int main()
{
    apply(&single<int>, 3);
    apply(&multi<int>, 7);
    return 0;
}