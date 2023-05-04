//
// Created by fade on 2023/5/4.
//

#ifndef CPP_DEMO_STRINGBAD_H
#define CPP_DEMO_STRINGBAD_H
#include <iostream>
class StringBad {
    char * str;
    int len;
    static int num_string;
public:
    StringBad();
    StringBad(const char *);
    ~StringBad();
    friend std::ostream & operator<<(std::ostream &, const StringBad &);
};
#endif //CPP_DEMO_STRINGBAD_H
