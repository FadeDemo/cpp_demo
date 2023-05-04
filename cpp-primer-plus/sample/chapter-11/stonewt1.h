//
// Created by fade on 2023/5/3.
//

#ifndef CPP_DEMO_STONEWT1_H
#define CPP_DEMO_STONEWT1_H
class Stonewt {
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double);
    Stonewt(int, double);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    operator int() const;
    operator double() const;
};
#endif //CPP_DEMO_STONEWT1_H
