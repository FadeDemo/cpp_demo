#ifndef TYPELISTPOPFRONT_HPP
#define TYPELISTPOPFRONT_HPP
#include "typelist.hpp"
template<typename List>
class PopFrontT;

template<typename Head, typename... Tail>
class PopFrontT<Typelist<Head, Tail...>> {
public:
    using Type = Typelist<Tail...>;
};

template<typename List>
using PopFront = typename PopFrontT<List>::Type;
#endif
