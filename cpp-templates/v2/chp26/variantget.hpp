#ifndef VARIANTGET_HPP
#define VARIANTGET_HPP
#include <exception>
#include "variant.hpp"
#include "cassert"

class EmptyVariant : public std::exception {
};

template<typename... Types>
template<typename T>
T& Variant<Types...>::get() & {
    if (empty()) {
        throw EmptyVariant();
    }

    assert(is<T>());
    return *this->template getBufferAs<T>();
}

#endif