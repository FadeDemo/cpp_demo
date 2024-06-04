#ifndef LARGESTTYPEACC_HPP
#define LARGESTTYPEACC_HPP
#include "../chp19/ifthenelse.hpp"
#include "typelistisempty.hpp"
#include "typelistpopfront.hpp"
#include "typelistfront.hpp"
#include "accumulate.hpp"
template<typename T, typename U>
class LargerTypeT
    : public IfThenElseT<sizeof(T) >= sizeof(U), T, U>
{
};

template<typename Typelist, bool = IsEmpty<Typelist>::value>
class LargestTypeAccT;

template<typename Typelist>
class LargestTypeAccT<Typelist, false>
    : public AccumulateT<PopFront<Typelist>, LargerTypeT,
                         Front<Typelist>>
{
};

template<typename Typelist>
class LargestTypeAccT<Typelist, true>
{
};

template<typename Typelist>
using LargestTypeAcc = typename LargestTypeAccT<Typelist>::Type;

#endif