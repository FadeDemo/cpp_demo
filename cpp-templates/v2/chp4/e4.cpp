//
// Created by fade on 2024/4/29.
//
template<typename... Args>
void foo(Args & ...args);

template<typename... Args>
void bar(Args const & ...args);