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
template <typename T>
inline T const& max (T const& a, T const& b)
{
    // if a < b then use b else use a
    return  a < b ? b : a;
}

//const char * test() {
//    return "dsdfafddf";
//}

class test {
public:
    test() {};
    test(const test &) = delete;
};

test a() {
    return test();
}