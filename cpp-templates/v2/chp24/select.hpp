#ifndef SELECT_HPP
#define SELECT_HPP
#include "valuelist.hpp"
#include "nthelement.hpp"
template<typename Types, typename Indices>
class SelectT;

template<typename Types, unsigned... Indices>
class SelectT<Types, Valuelist<unsigned, Indices...>>
{
public:
    using Type = Typelist<NthElement<Types, Indices>...>;
};

template<typename Types, typename Indices>
using Select = typename SelectT<Types, Indices>::Type;

#endif