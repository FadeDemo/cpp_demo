//
// Created by fade on 2024/4/6.
//

#ifndef CPP_DEMO_FUNCOVERLOAD_HPP
#define CPP_DEMO_FUNCOVERLOAD_HPP
template<typename T>
int f(T) {
    return 1;
}
template<typename T>
int f(T *) {
    return 2;
}
#endif//CPP_DEMO_FUNCOVERLOAD_HPP
