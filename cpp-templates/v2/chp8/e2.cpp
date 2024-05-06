//
// Created by fade on 2024/5/6.
//
#include "type_traits"
template<typename T>
void foo(T t) {
    if constexpr (std::is_integral_v<T>) {
        if (t > 0) {
            foo(t-1);
        }
    }
    else {
        undeclared(t);
        undeclared();
        static_assert(false, "no integral");
        static_assert(!std::is_integral_v<T>, "no integral");
    }
}