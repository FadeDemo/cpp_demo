#ifndef TUPLESORT_HPP
#define TUPLESORT_HPP
#include "../chp24/ctvalue.hpp"
#include "../chp24/nthelement.hpp"
#include "tuple0.hpp"
#include "../chp24/insertionsort.hpp"
#include "makeindexlist.hpp"
#include "tupletypelist.hpp"
#include "select.hpp"
// metafunction wrapper that compares the elements in a tuple:
template<typename List, template<typename T, typename U> class F>
class MetafunOfNthElementT {
public:
    template<typename T, typename U> class Apply;

    template<unsigned N, unsigned M>
    class Apply<CTValue<unsigned, M>, CTValue<unsigned, N>>
        : public F<NthElement<List, M>, NthElement<List, N>> { };
};

// sort a tuple based on comparing the element types:
template<template<typename T, typename U> class Compare,
         typename... Elements>
auto sort(Tuple<Elements...> const& t)
{
    return select(t,
                  InsertionSort<MakeIndexList<sizeof...(Elements)>,
                                MetafunOfNthElementT<
                                        Tuple<Elements...>,
                                        Compare>::template Apply>());
}

#endif