#ifndef RATIO_HPP
#define RATIO_HPP
template<unsigned N, unsigned D = 1>
struct Ratio {
    static constexpr unsigned num = N;  // numerator
    static constexpr unsigned den = D;  // denominator
    using Type = Ratio<num, den>;
};
#endif
