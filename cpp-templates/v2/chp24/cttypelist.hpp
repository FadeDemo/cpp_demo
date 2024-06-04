#ifndef CTTYPELIST_HPP
#define CTTYPELIST_HPP
#include "typelist.hpp"
#include "ctvalue.hpp"
template<typename T, T... Values>
using CTTypelist = Typelist<CTValue<T, Values>...>;

#endif