#ifndef VARIANTCOPYCTOR_HPP
#define VARIANTCOPYCTOR_HPP
#include "variant.hpp"
template<typename... Types>
Variant<Types...>::Variant(Variant const& source) {
    if (!source.empty()) {
        source.visit([&](auto const& value) {
            *this = value;
        });
    }
}

#endif