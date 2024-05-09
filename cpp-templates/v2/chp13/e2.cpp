//
// Created by fade on 2024/5/9.
//
template<typename T>
struct number
{
    number(int) {};
    friend number gcd(number x, number y);
//    friend number gcd(number x, number y) { return 0; }; // Definition within
                                                        // a class template
};

template<typename T>
number<T> gcd(number<T> x, number<T> y) {
    return 0;
}

// Unless a matching declaration is provided gcd is
// an invisible (except through ADL) member of this namespace
void g()
{
    number<double> a(3), b(4);
    a = gcd<double>(a, b); // Finds gcd because number<double> is an associated class,
                  // making gcd visible in its namespace (global scope)
    //  b = gcd(3, 4); // Error; gcd is not visible
}

int main()
{

    return 0;
}