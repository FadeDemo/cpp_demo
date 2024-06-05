#ifndef COPYCOUNTER_HPP
#define COPYCOUNTER_HPP
template<int N>
struct CopyCounter
{
    inline static unsigned numCopies = 0;
    CopyCounter() {
    }
    CopyCounter(CopyCounter const&) {
        ++numCopies;
    }
};

#endif