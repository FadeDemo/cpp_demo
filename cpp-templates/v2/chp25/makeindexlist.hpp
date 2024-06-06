#ifndef MAKEINDEXLIST_HPP
#define MAKEINDEXLIST_HPP
#include "../chp24/valuelist.hpp"
#include "type_traits"
// recursive case
template<unsigned N, typename Result = Valuelist<unsigned>>
struct MakeIndexListT
    : MakeIndexListT<N-1, PushFront<Result, CTValue<unsigned, N-1>>>
{
};

// basis case
template<typename Result>
struct MakeIndexListT<0, Result>
{
    using Type = Result;
};

template<unsigned N>
using MakeIndexList = typename MakeIndexListT<N>::Type;

MakeIndexList<5> a;
static_assert(std::is_same_v<decltype(a), Valuelist<unsigned, 0, 1, 2, 3, 4>>);

#endif