//
// Created by fade on 2023/5/4.
//

#ifndef CPP_DEMO_STRING1_H
#define CPP_DEMO_STRING1_H
#include <iostream>
using std::ostream;
using std::istream;
class String {
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String(const char *);
    String();
    String(const String &);
    ~String();
    int length() const {
        return len;
    }
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int);
    const char & operator[](int) const;
    friend bool operator<(const String &, const String &);
    friend bool operator>(const String &, const String &);
    friend bool operator==(const String &, const String &);
    friend ostream & operator<<(ostream &, const String &);
    friend istream & operator>>(istream &, String &);
    static int HowMany();
};
#endif //CPP_DEMO_STRING1_H
