//
// Created by fade on 2024/5/6.
//
template<typename T>
auto len(T const & t) -> decltype((void)(t.size()), T::size_type()) {
    return t.size();
}