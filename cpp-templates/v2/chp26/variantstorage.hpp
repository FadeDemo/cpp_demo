#ifndef VARIANTSTORAGE_HPP
#define VARIANTSTORAGE_HPP
#include "../chp24/typelist.hpp"
#include "../chp24/largesttype.hpp"
#include <new>  // for std::launder()

template<typename... Types>
class VariantStorage {
    using LargestT = LargestType<Typelist<Types...>>;
    // 指定对齐
    alignas(Types...) unsigned char buffer[sizeof(LargestT)];
    unsigned char discriminator = 0;
public:
    unsigned char getDiscriminator() const { return discriminator; }
    void setDiscriminator(unsigned char d) { discriminator = d; }

    void* getRawBuffer() { return buffer; }
    const void* getRawBuffer() const { return buffer; }

    // 因为要覆盖缓冲区，所以这里无法通过buffer访问新数据，只能通过launder的方式实现
    template<typename T>
    T* getBufferAs() { return std::launder(reinterpret_cast<T*>(buffer)); }
    template<typename T>
    T const* getBufferAs() const {
        return std::launder(reinterpret_cast<T const*>(buffer));
    }
};

#endif