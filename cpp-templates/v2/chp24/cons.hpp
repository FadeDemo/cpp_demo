#ifndef CONS_HPP
#define CONS_HPP
class Nil { };

template<typename HeadT, typename TailT = Nil>
class Cons {
public:
    using Head = HeadT;
    using Tail = TailT;
};

#endif