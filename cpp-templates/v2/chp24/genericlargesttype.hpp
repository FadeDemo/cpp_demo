#ifndef GENERICLARGESTTYPE_HPP
#define GENERICLARGESTTYPE_HPP
#include "typelistisempty.hpp"
#include "typelistpopfront.hpp"
#include "typelistfront.hpp"
#include "../chp19/ifthenelse.hpp"
template<typename List, bool Empty = IsEmpty<List>::value>
class LargestTypeT;

// recursive case:
template<typename List>
class LargestTypeT<List, false>
{
private:
    using Contender = Front<List>;
    using Best = typename LargestTypeT<PopFront<List>>::Type;
public:
    using Type = IfThenElse<(sizeof(Contender) >= sizeof(Best)),
                            Contender, Best>;
};

// basis case:
template<typename List>
class LargestTypeT<List, true>
{
public:
    using Type = char;
};

template<typename List>
using LargestType = typename LargestTypeT<List>::Type;

#endif