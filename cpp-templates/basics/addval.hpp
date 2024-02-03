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
template <typename T, int VAL>
T addValue (T const& x)
{
    return x + VAL;
}

// available in c++ 20
//template <double v>

template<char const * name>
class MyClass {

};
// string literals are not allowed
//char const * s = "hello";
//MyClass<s> x;
//MyClass<"hello"> x;
// external or internal linkage are both allowed
extern char const s[] = "hello";
MyClass<s> x;