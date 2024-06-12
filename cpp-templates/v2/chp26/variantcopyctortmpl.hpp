#ifndef VARIANTCOPYCTORTMPL_HPP
#define VARIANTCOPYCTORTMPL_HPP
#include "variant.hpp"
template<typename... Types>
template<typename... SourceTypes>
Variant<Types...>::Variant(Variant<SourceTypes...> const& source) {
    if (!source.empty()) {
        source.visit([&](auto const& value) {
            *this = value;
        });
    }
}

#endif