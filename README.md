# cpp_demo

### 在使用模板时为什么这样无法正常运行，而这样却可以

现在假设我们有以下文件：

myfirst.hpp

```c++
#ifndef MYFIRST_HPP
#define MYFIRST_HPP

// declaration of template
template <typename T> 
void print_typeof (T const&);

#endif // MYFIRST_HPP
```
myfirst.cpp

```c++
#include <iostream>
#include <typeinfo>
#include "myfirst.hpp"

// implementation/definition of template
template <typename T>
void print_typeof (T const& x)
{
    std::cout << typeid(x).name() << std::endl;
}
```

myfirstmain.cpp

```c++
#include "myfirst.hpp"

// use of the template
int main()
{
    double ice = 3.0;
    print_typeof(ice);  // call function template for type double
}
```

我们在 `CMakeLists.txt` 中这样写：

```
add_executable(myfirstmain cpp-templates/basics/myfirstmain.cpp)
# add_executable(myfirstmain cpp-templates/basics/myfirst.cpp cpp-templates/basics/myfirstmain.cpp)
```

我们会发现这样链接器报错：

```
undefined reference to `void print_typeof<double>(double const&)'
collect2.exe: error: ld returned 1 exit status
```

为什么这样不行呢，这里编译器在编译 `myfirstmain.cpp` 时，没有看到基于 `double` 实例化的函数定义的时候，编译器会假定我们在别处提供了定义，并产生一个指向该定义的引用，交由链接器来解决这个问题，显然仅编译 `myfirstmain.cpp` 链接器是会报错的。即使我们多编译一个 `myfirst.cpp` ，这里看起来有模板的声明和定义了，但是要注意模板并不创建任何函数，在链接过程中 `myfirst.cpp` 实际上也无 `myfirstmain.cpp` 中要使用的函数定义。并且 `myfirst.cpp` 和 `myfirstmain.cpp` 是不同的翻译单元， `myfirstmain.cpp` 无法根据 `myfirst.cpp` 来创建函数的定义。

相反假如我们多加一个文件，以及在 `CMakeLists.txt` 中这样定义，我们就能正常运行程序了：

myfirstinst.cpp

```c++
#include "myfirst.cpp"

// explicitly instantiate print_typeof() for type double
template void print_typeof<double>(double const&);
```

```
add_executable(myfirstmain cpp-templates/basics/myfirstinst.cpp cpp-templates/basics/myfirstmain.cpp)
```

这是因为此时 `myfirstinst.cpp` 中的显式实例化恰好提供了对应的函数定义。
