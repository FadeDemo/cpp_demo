#ifndef VARIANTDEFAULTCTOR_HPP
#define VARIANTDEFAULTCTOR_HPP
#include "variant.hpp"
template<typename... Types>
Variant<Types...>::Variant() {
    *this = Front<Typelist<Types...>>();
}


#endif