#ifndef NTHELEMENT_HPP
#define NTHELEMENT_HPP
#include "typelistpopfront.hpp"
#include "typelistfront.hpp"
// recursive case:
template<typename List, unsigned N>
class NthElementT : public NthElementT<PopFront<List>, N-1>
{
};

// basis case:
template<typename List>
class NthElementT<List, 0> : public FrontT<List>
{
};

template<typename List, unsigned N>
using NthElement = typename NthElementT<List, N>::Type;
#endif
