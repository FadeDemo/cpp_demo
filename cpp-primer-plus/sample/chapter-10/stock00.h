//
// Created by fade on 2023/5/1.
//

#ifndef CPP_DEMO_STOCK00_H
#define CPP_DEMO_STOCK00_H
#include <string>
class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {
        total_val = share_val * share_val;
    }

public:
    void acquire(const std::string &, long, double);
    void buy(long, double );
    void sell(long, double);
    void update(double);
    void show() const;
    Stock(const std::string &, long n = 0, double pr = 0.0);
    Stock();
    ~Stock();
    const Stock & topval(const Stock &) const;
};
#endif //CPP_DEMO_STOCK00_H
