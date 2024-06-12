#ifndef VARIANTCHOICEINIT_HPP
#define VARIANTCHOICEINIT_HPP
#include <utility>  // for std::move()
#include "variantchoice.hpp"

template<typename T, typename... Types>
VariantChoice<T, Types...>::VariantChoice(T const& value) {
    // place value in buffer and set type discriminator:
    new(getDerived().getRawBuffer()) T(value);
    getDerived().setDiscriminator(Discriminator);
}

template<typename T, typename... Types>
VariantChoice<T, Types...>::VariantChoice(T&& value) {
    // place moved value in buffer and set type discriminator:
    new(getDerived().getRawBuffer()) T(std::move(value));
    getDerived().setDiscriminator(Discriminator);
}

#endif