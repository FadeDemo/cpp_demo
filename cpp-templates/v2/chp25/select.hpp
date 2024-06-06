#ifndef SELECT_HPP
#define SELECT_HPP
#include "tuple0.hpp"
#include "../chp24/valuelist.hpp"
#include "maketuple.hpp"
#include "tupleget.hpp"
template<typename... Elements, unsigned... Indices>
auto select(Tuple<Elements...> const& t,
            Valuelist<unsigned, Indices...>)
{
    return makeTuple(get<Indices>(t)...);
}

#endif