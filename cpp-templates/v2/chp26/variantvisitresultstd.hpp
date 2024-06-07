#ifndef VARIANTVISITRESULTSTD_HPP
#define VARIANTVISITRESULTSTD_HPP
#include "type_traits"
#include "variantvisitresult.hpp"
template<typename Visitor, typename... ElementTypes>
class VisitResultT<ComputedResultType, Visitor, ElementTypes...>
{
public:
    using Type =
            std::common_type_t<VisitElementResult<Visitor, ElementTypes>...>;
};

#endif