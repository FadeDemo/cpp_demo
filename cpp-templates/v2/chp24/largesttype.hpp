#ifndef LARGESTTYPE_HPP
#define LARGESTTYPE_HPP
#include "../chp19/ifthenelse.hpp"
#include "typelistfront.hpp"
#include "typelistpopfront.hpp"
template<typename List>
class LargestTypeT;

// recursive case:
template<typename List>
class LargestTypeT
{
private:
    using First = Front<List>;
    using Rest = typename LargestTypeT<PopFront<List>>::Type;
public:
    using Type = IfThenElse<(sizeof(First) >= sizeof(Rest)), First, Rest>;
};

// basis case:
template<>
class LargestTypeT<Typelist<>>
{
public:
    using Type = char;
};

template<typename List>
using LargestType = typename LargestTypeT<List>::Type;

#endif