class BigInt {
public:
    BigInt(long long);
};

template<>
struct AccumulationTraits<BigInt> {
    using AccT = BigInt;
    static BigInt zero() {
        return BigInt{0};
    }
};
