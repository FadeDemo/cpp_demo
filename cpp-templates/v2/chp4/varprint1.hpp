#include <iostream>

// 递归结束
void print ()
{
}

template<typename T, typename... Types>
void print (T firstArg, Types... args)
{
  std::cout << firstArg << '\n';  // print first argument
  print(args...);                 // call print() for remaining arguments
}
