//
// Created by fade on 2023/4/30.
//

#ifndef CPP_DEMO_GOLF_H
#define CPP_DEMO_GOLF_H
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};
void set_golf(golf &, const char *, int);
int set_golf(golf &);
void handicap(golf &, int);
void show_golf(const golf &);
#endif //CPP_DEMO_GOLF_H
