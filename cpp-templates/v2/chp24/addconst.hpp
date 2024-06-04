#ifndef ADDCONST_HPP
#define ADDCONST_HPP
template<typename T>
struct AddConstT
{
    using Type = T const;
};

template<typename T>
using AddConst = typename AddConstT<T>::Type;

#endif