#ifndef INDEXLISTREVERSE_HPP
#define INDEXLISTREVERSE_HPP
#include "tuple0.hpp"
#include "../chp24/valuelist.hpp"
#include "makeindexlist.hpp"
#include "../chp24/typelistreverse.hpp"
#include "maketuple.hpp"
//#include "../chp24/valuelist.hpp"
template<typename... Elements, unsigned... Indices>
auto reverseImpl(Tuple<Elements...> const& t,
                 Valuelist<unsigned, Indices...>)
{
    return makeTuple(get<Indices>(t)...);
}

template<typename... Elements>
auto reverse(Tuple<Elements...> const& t)
{
    return reverseImpl(t,
                       Reverse<MakeIndexList<sizeof...(Elements)>>());
}

#endif