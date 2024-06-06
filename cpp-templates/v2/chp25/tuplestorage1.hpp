#ifndef TUPLESTORAGE_1_HPP
#define TUPLESTORAGE_1_HPP
//#include "tuple0.hpp"

template<typename... Types>
class Tuple;

template<>
class Tuple<> {
    // no storage required
};

// recursive case:
template<typename Head, typename... Tail>
class Tuple<Head, Tail...> : private Tuple<Tail...>
{
private:
    Head head;
public:
    Head& getHead() { return head; }
    Head const& getHead() const { return head; }
    Tuple<Tail...>& getTail() { return *this; }
    Tuple<Tail...> const& getTail() const { return *this; }
};

#endif