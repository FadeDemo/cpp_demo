#ifndef POPFRONT_HPP
#define POPFRONT_HPP
#include "tuple0.hpp"
#include "tupletypelist.hpp"
template<typename... Types>
PopFront<Tuple<Types...>>
popFront(Tuple<Types...> const& tuple)
{
    return tuple.getTail();
}

#endif