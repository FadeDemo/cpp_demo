//
// Created by fade on 2024/4/27.
//
template<char const * name>
class Message {

};

// not allowed
//Message<"hello"> x;

// not allowed
//char * s = "hello";
//Message<s> x;

extern char const s03[] = "hi";
char const s11[] = "hi";
int main()
{
    // available in all version
    Message<s03> m03;
    // since c++11
    Message<s11> m11;
    // since c++17
    static char const s17[] = "hi";
    Message<s17> m17;
    return 0;
}