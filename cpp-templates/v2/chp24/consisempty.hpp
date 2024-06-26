#ifndef CONSISEMPTY_HPP
#define CONSISEMPTY_HPP
#include "cons.hpp"
template<typename List>
struct IsEmpty {
    static constexpr bool value = false;
};

template<>
struct IsEmpty<Nil> {
    static constexpr bool value = true;
};

#endif