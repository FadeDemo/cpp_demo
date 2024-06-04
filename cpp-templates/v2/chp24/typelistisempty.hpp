#ifndef TYPELISTISEMPTY_HPP
#define TYPELISTISEMPTY_HPP
#include "typelist.hpp"
template<typename List>
class IsEmpty
{
public:
    static constexpr bool value = false;
};

template<>
class IsEmpty<Typelist<>> {
public:
    static constexpr bool value = true;
};

#endif