#ifndef TUPLE_0_HPP
#define TUPLE_0_HPP
template<typename... Types>
class Tuple;

// basis case:
template<>
class Tuple<> {
    // no storage required
};

// recursive case:
template<typename Head, typename... Tail>
class Tuple<Head, Tail...>
{
private:
    Head head;
    Tuple<Tail...> tail;
public:
    // constructors:
    Tuple() {
    }
    Tuple(Head const& head, Tuple<Tail...> const& tail)
        : head(head), tail(tail) {
    }
//    Tuple(Head const& head) : head(head), tail(Tuple<>()) {
//
//    }
    Tuple(Head const& head, Tail const&... tail) : head(head), tail(Tuple<Tail...>(tail...)) {

    }

    //...

    Head& getHead() { return head; }
    Head const& getHead() const { return head; }
    Tuple<Tail...>& getTail() { return tail; }
    Tuple<Tail...> const& getTail() const { return tail; }
};

#endif