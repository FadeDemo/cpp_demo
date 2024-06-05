#ifndef PUSHFRONT_HPP
#define PUSHFRONT_HPP
#include "tuple0.hpp"
#include "tupletypelist.hpp"
template<typename... Types, typename V>
PushFront<Tuple<Types...>, V>
pushFront(Tuple<Types...> const& tuple, V const& value)
{
    return PushFront<Tuple<Types...>, V>(value, tuple);
}

#endif