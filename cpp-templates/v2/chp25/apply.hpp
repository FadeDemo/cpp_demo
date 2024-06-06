#ifndef APPLY_HPP
#define APPLY_HPP
#include "tuple0.hpp"
#include "../chp24/valuelist.hpp"
#include "makeindexlist.hpp"
template<typename F, typename... Elements, unsigned... Indices>
auto applyImpl(F f, Tuple<Elements...> const& t,
               Valuelist<unsigned, Indices...>)
        ->decltype(f(get<Indices>(t)...))
{
    return f(get<Indices>(t)...);
}

template<typename F, typename... Elements,
         unsigned N = sizeof...(Elements)>
auto apply(F f, Tuple<Elements...> const& t)
        ->decltype(applyImpl(f, t, MakeIndexList<N>()))
{
    return applyImpl(f, t, MakeIndexList<N>());
}

#endif