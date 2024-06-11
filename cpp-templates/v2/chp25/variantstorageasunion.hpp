#ifndef VARIANTSTORAGEASUNION_HPP
#define VARIANTSTORAGEASUNION_HPP
template<typename... Types>
union VariantStorage;

template<typename Head, typename... Tail>
union VariantStorage<Head, Tail...> {
    Head head;
    VariantStorage<Tail...> tail;
};

template<>
union VariantStorage<> {
};


#endif