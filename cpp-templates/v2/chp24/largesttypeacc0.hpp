#ifndef LARGESTTYPEACC_0_HPP
#define LARGESTTYPEACC_0_HPP
#include "../chp19/ifthenelse.hpp"
#include "typelistpopfront.hpp"
#include "typelistfront.hpp"
#include "accumulate.hpp"
template<typename T, typename U>
class LargerTypeT
    : public IfThenElseT<sizeof(T) >= sizeof(U), T, U>
{
};

template<typename Typelist>
class LargestTypeAccT
    : public AccumulateT<PopFront<Typelist>, LargerTypeT,
                         Front<Typelist>>
{
};

template<typename Typelist>
using LargestTypeAcc = typename LargestTypeAccT<Typelist>::Type;

#endif