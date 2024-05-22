//
// Created by fade on 2024/5/22.
//
#include "cstddef"
template<typename T>
constexpr std::size_t SZ = sizeof(T);

template<typename T>
constexpr std::size_t SZ<T&> = sizeof(void *);

template<typename T>
typename T::iterator null_iterator;

template<typename T, std::size_t N>
T * null_iterator<T[N]> = nullptr;
