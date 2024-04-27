//
// Created by fade on 2024/4/27.
//
#include "addvalue.hpp"
#include "algorithm"
#include "vector"
#include "cassert"
int main()
{
    using std::transform;
    using std::vector;
    vector v {1, 2, 3};
    vector<int> d;
    transform(v.begin(), v.end(), d.begin(), addValue<5, int>);
    assert(!v.empty());
    return 0;
}