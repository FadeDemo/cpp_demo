/* The following code example is taken from the book
 * "C++ Templates - The Complete Guide"
 * by David Vandevoorde and Nicolai M. Josuttis, Addison-Wesley, 2002
 *
 * (C) Copyright David Vandevoorde and Nicolai M. Josuttis 2002.
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 */
#include "isclasst.hpp"
#include "csm2.hpp"

// 第二个模板参数表示是否能安全地使用位元拷贝，这里假设不能对class类型进行安全的位元拷贝
template <typename T>
class CSMtraits : public BitOrClassCSM<T, IsClassT<T>::No > {
};
