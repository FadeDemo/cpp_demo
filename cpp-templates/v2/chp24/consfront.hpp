#ifndef CONSFRONT_HPP
#define CONSFRONT_HPP
template<typename List>
class FrontT {
public:
    using Type = typename List::Head;
};

template<typename List>
using Front = typename FrontT<List>::Type;

#endif