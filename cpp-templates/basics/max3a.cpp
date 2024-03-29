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
#include <iostream>
#include <cstring>
#include <string>

// maximum of two values of any type (call-by-reference)
template <typename T>
inline T const& max (T const& a, T const& b)
{
    std::cout << "inline T const& max (T const& a, T const& b)" << std::endl;
    return  a < b  ?  b : a;
}

// maximum of two C-strings (call-by-value)
inline char const* max (char const* a, char const* b)
{
    std::cout << "inline char const* max (char const* a, char const* b)" << std::endl;
    return  std::strcmp(a,b) < 0  ?  b : a;
}

// maximum of two C-strings (call-by-reference)
// fixed
//inline char const* const& max (char const* const& a, char const* const& b)
//{
//    std::cout << "inline char const* const& max (char const* const& a, char const* const& b)" << std::endl;
//    return  std::strcmp(a,b) < 0  ?  b : a;
//}

// maximum of three values of any type (call-by-reference)
template <typename T>
inline T const& max (T const& a, T const& b, T const& c)
{
    std::cout << "inline T const& max (T const& a, T const& b, T const& c)" << std::endl;
    return max (max(a,b), c);  // error, if max(a,b) uses call-by-value
}

int main ()
{
    ::max(7, 42, 68);     // OK

    const char* s1 = "frederic";
    const char* s2 = "anica";
    const char* s3 = "lucas";
    std::cout << ::max(s1, s2, s3);    // ERROR

}
