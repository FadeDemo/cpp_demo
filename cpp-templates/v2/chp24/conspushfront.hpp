#ifndef CONSPUSHFRONT_HPP
#define CONSPUSHFRONT_HPP
#include "cons.hpp"
template<typename List, typename Element>
class PushFrontT {
public:
    using Type = Cons<Element, List>;
};

template<typename List, typename Element>
using PushFront = typename PushFrontT<List, Element>::Type;

#endif