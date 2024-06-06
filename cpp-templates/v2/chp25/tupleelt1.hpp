#ifndef TUPLEELT_1_HPP
#define TUPLEELT_1_HPP
#include "utility"
template<unsigned Height, typename T>
class TupleElt {
    T value;
public:
    TupleElt() = default;

    template<typename U>
    TupleElt(U&& other) : value(std::forward<U>(other)) { }

    T&       get()       { return value; }
    T const& get() const { return value; }
};

#endif