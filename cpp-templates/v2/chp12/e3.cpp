//
// Created by fade on 2024/5/8.
//
template<typename...>
class Typelist {};

template<typename X, typename Y>
struct Zip;

template<typename... Xs, typename... Ys>
struct Zip<Typelist<Xs...>, Typelist<Ys...>>;