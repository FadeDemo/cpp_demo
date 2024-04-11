#include <iostream>
#include <list>
#include "vector"
//
// Created by fade on 2024/4/11.
//
template<typename T>
class List;

class Marker;

List<::Marker> * markers;

template<typename T>
class Array {
public:
    typedef T ElementT;
};

template<typename T>
//void clear(Array<T>::ElementT & p);
void clear(typename Array<T>::ElementT & p);

//template<typename T>
//typedef std::vector<std::list<T>> Table;

int main()
{
    using std::cout;
    cout << (void *)"hello" << std::endl;
    cout << (void *)"hello" << std::endl;
    return 0;
}