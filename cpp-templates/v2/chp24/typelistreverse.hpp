#ifndef TYPELISTREVERSE_HPP
#define TYPELISTREVERSE_HPP
#include "typelistisempty.hpp"
#include "typelistpopfront.hpp"
#include "typelistfront.hpp"
#include "typelistpushback.hpp"
template<typename List, bool Empty = IsEmpty<List>::value>
class ReverseT;

template<typename List>
using Reverse = typename ReverseT<List>::Type;

// recursive case:
template<typename List>
class ReverseT<List, false>
    : public PushBackT<Reverse<PopFront<List>>, Front<List>> { };

// basis case:
template<typename List>
class ReverseT<List, true>
{
public:
    using Type = List;
};

#endif