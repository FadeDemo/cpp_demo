//
// Created by fade on 2024/5/31.
//

#ifndef CPP_DEMO_FUNCTIONPTR_CPINV_HPP
#define CPP_DEMO_FUNCTIONPTR_CPINV_HPP
#include "functionptr.hpp"
template<typename R, typename... Args>
FunctionPtr<R(Args...)>::FunctionPtr(const FunctionPtr<R(Args...)> &other) : bridge(nullptr) {
    if (other.bridge) {
        bridge = other.bridge->clone();
    }
}

template<typename R, typename... Args>
R FunctionPtr<R(Args...)>::operator()(Args... args) const {
    return bridge->invoke(std::forward<Args>(args)...);
}
#endif//CPP_DEMO_FUNCTIONPTR_CPINV_HPP
