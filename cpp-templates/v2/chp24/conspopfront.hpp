#ifndef CONSPOPFRONT_HPP
#define CONSPOPFRONT_HPP
template<typename List>
class PopFrontT {
public:
    using Type = typename List::Tail;
};

template<typename List>
using PopFront = typename PopFrontT<List>::Type;

#endif