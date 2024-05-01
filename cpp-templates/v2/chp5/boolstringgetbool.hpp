#include "boolstring.hpp"

// full specialization for BoolString::getValue<>() for bool
template<>
inline bool BoolString::get<bool>() const {
  return value == "true" || value == "1" || value == "on";
}

//template<typename T>
//inline bool BoolString::get<T *>() const {
//    return value == "true" || value == "1" || value == "on";
//}

//template<>
//inline int BoolString::get<int>() const;