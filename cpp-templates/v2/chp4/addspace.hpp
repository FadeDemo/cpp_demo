#include <iostream>

template<typename T>
class AddSpace
{
  private:
    T const& ref;                  // refer to argument passed in constructor
  public:
    AddSpace(T const& r): ref(r) {
    }
    friend std::ostream& operator<< (std::ostream& os, AddSpace<T> s) {
      return os << s.ref << ' ';   // output passed argument and a space
    }
};

template<typename... Args>
void print (Args... args) {
    // original
//  ( std::cout << ... << AddSpace(args) ) << '\n';
    // 测试是否会在最后一个参数后面打印空格
    ( std::cout << ... << AddSpace(args) ) << '?';
}
