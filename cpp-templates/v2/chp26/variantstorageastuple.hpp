#ifndef VARIANTSTORAGEASTUPLE_HPP
#define VARIANTSTORAGEASTUPLE_HPP
#include "../chp25/tuple0.hpp"
template<typename... Types>
class Variant {
public:
    Tuple<Types...> storage;
    unsigned char discriminator;
};

#endif