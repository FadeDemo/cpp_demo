#ifndef VARIANTCHOICEDESTROY_HPP
#define VARIANTCHOICEDESTROY_HPP
#include "variantchoice.hpp"
template<typename T, typename... Types>
bool VariantChoice<T, Types...>::destroy() {
    if (getDerived().getDiscriminator() == Discriminator) {
        // if type matches, call placement delete:
        getDerived().template getBufferAs<T>()->~T();
        return true;
    }
    return false;
}

#endif