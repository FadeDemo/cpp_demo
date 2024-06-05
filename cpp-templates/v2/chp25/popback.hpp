#ifndef POPBACK_HPP
#define POPBACK_HPP
#include "tuple0.hpp"
#include "reverse.hpp"
#include "tupletypelist.hpp"
template<typename... Types>
PopBack<Tuple<Types...>>
popBack(Tuple<Types...> const& tuple)
{
    return reverse(popFront(reverse(tuple)));
}

#endif