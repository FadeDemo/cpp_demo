#ifndef IDENTITY_HPP
#define IDENTITY_HPP
// yield T when using member Type:
template<typename T>
struct IdentityT {
    using Type = T;
};

#endif