#ifndef TYPELISTPUSHBACK_HPP
#define TYPELISTPUSHBACK_HPP
#include "typelist.hpp"
template<typename List, typename NewElement>
class PushBackT;

template<typename... Elements, typename NewElement>
class PushBackT<Typelist<Elements...>, NewElement>
{
public:
    using Type = Typelist<Elements..., NewElement>;
};

template<typename List, typename NewElement>
using PushBack = typename PushBackT<List, NewElement>::Type;

#endif