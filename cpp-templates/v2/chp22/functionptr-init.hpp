//
// Created by fade on 2024/5/31.
//

#ifndef CPP_DEMO_FUNCTIONPTR_INIT_HPP
#define CPP_DEMO_FUNCTIONPTR_INIT_HPP
#include "functionptr-cpinv.hpp"
#include "specificfunctorbridge.hpp"
template<typename R, typename... Args>
template <typename F>
FunctionPtr<R(Args...)>::FunctionPtr(F &&f) : bridge(nullptr) {
    using Functor = std::decay_t<F>;
    using Bridge = SpecificFunctorBridge<Functor , R, Args...>;
    bridge = new Bridge (std::forward<F>(f));
}
#endif//CPP_DEMO_FUNCTIONPTR_INIT_HPP
