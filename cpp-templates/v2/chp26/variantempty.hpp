#ifndef VARIANTEMPTY_HPP
#define VARIANTEMPTY_HPP
#include "variant.hpp"
template<typename... Types>
bool Variant<Types...>::empty() const {
    return this->getDiscriminator() == 0;
}
#endif