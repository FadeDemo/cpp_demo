#ifndef FINDINDEXOF_HPP
#define FINDINDEXOF_HPP
#include "type_traits"
#include "../chp24/typelistisempty.hpp"
#include "../chp24/typelistpopfront.hpp"
#include "../chp24/typelistfront.hpp"
#include "../chp19/ifthenelse.hpp"
template<typename List, typename T, unsigned N = 0,
         bool Empty = IsEmpty<List>::value>
struct FindIndexOfT;

// recursive case:
template<typename List, typename T, unsigned N>
struct FindIndexOfT<List, T, N, false>
    : public IfThenElse<std::is_same<Front<List>, T>::value,
                        std::integral_constant<unsigned, N>,
                        FindIndexOfT<PopFront<List>, T, N+1>>
{
};

// basis case:
template<typename List, typename T, unsigned N>
struct FindIndexOfT<List, T, N, true>
{
};
#endif