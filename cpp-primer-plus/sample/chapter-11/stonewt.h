//
// Created by fade on 2023/5/3.
//

#ifndef CPP_DEMO_STONEWT_H
#define CPP_DEMO_STONEWT_H
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
};
#endif //CPP_DEMO_STONEWT_H
