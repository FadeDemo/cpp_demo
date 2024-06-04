#ifndef TRANSFORM_HPP
#define TRANSFORM_HPP
#include "typelistisempty.hpp"
#include "typelistpopfront.hpp"
#include "typelistfront.hpp"
#include "typelistpushfront.hpp"
template<typename List, template<typename T> class MetaFun,
         bool Empty = IsEmpty<List>::value>
class TransformT;

// recursive case:
template<typename List, template<typename T> class MetaFun>
class TransformT<List, MetaFun, false>
    : public PushFrontT<typename TransformT<PopFront<List>, MetaFun>::Type,
                        typename MetaFun<Front<List>>::Type>
{
};

// basis case:
template<typename List, template<typename T> class MetaFun>
class TransformT<List, MetaFun, true>
{
public:
    using Type = List;
};

template<typename List, template<typename T> class MetaFun>
using Transform = typename TransformT<List, MetaFun>::Type;

#endif