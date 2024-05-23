#include "issame.hpp"

template<typename T>
struct IsDefaultConstructibleT {
  private:
    // test() trying substitute call of a default constructor for T passed as U:
    template<typename U, typename = decltype(U())>
    // T is not an immediate context
//      template<typename, typename = decltype(T())>
      static char test(void*);
    // test() fallback:
    template<typename>
      static long test(...);
  public:
    static constexpr bool value
      = IsSameT<decltype(test<T>(nullptr)), char>::value;
};
