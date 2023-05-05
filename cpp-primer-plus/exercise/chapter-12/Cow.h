//
// Created by fade on 2023/5/5.
//

#ifndef CPP_DEMO_COW_H
#define CPP_DEMO_COW_H
class Cow {
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char *, const char *, double);
    Cow(const Cow &);
    ~Cow();
    Cow & operator=(const Cow &);
    void ShowCow() const;
};
#endif //CPP_DEMO_COW_H
