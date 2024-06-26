#ifndef TUPLETYPELIST_HPP
#define TUPLETYPELIST_HPP
#include "tuple0.hpp"
#include "../chp24/typelistisempty.hpp"
#include "../chp24/typelistfront.hpp"
#include "../chp24/typelistpopfront.hpp"
#include "../chp24/typelistpushfront.hpp"
#include "../chp24/typelistpushback.hpp"
#include "../chp24/typelistpopback.hpp"

// determine whether the tuple is empty:
template<>
struct IsEmpty<Tuple<>> {
    static constexpr bool value = true;
};

// extract front element:
template<typename Head, typename... Tail>
class FrontT<Tuple<Head, Tail...>> {
public:
    using Type = Head;
};

// remove front element:
template<typename Head, typename... Tail>
class PopFrontT<Tuple<Head, Tail...>> {
public:
    using Type = Tuple<Tail...>;
};

// add element to the front:
template<typename... Types, typename Element>
class PushFrontT<Tuple<Types...>, Element> {
public:
    using Type = Tuple<Element, Types...>;
};

// add element to the back:
template<typename... Types, typename Element>
class PushBackT<Tuple<Types...>, Element> {
public:
    using Type = Tuple<Types..., Element>;
};

template<typename... Types>
class PopBackT<Tuple<Types...>> {
public:
    using Type = Reverse<PopFront<Reverse<Tuple<Types...>>>>;
};
#endif