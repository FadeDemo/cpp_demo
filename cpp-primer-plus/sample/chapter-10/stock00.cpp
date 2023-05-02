//
// Created by fade on 2023/5/1.
//
#include "stock00.h"
#include <iostream>
void Stock::acquire(const std::string & co, long n, double pr) {
    company = co;
    if (n < 0) {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}
void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0) {
        cout << "Number of share sold can't be negative. "
             << "Transaction is aborted.\n";
    } else if (num > shares) {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price) {
    share_val = price;
    set_tot();
}
void Stock::show() const {
    using std::ios_base;
    auto orig = std::cout.setf(ios_base::fixed, ios_base::floatfield);
    auto prec = std::cout.precision(3);
    std::cout << "Company: " << company
              << " Shares: " << shares << std::endl
              << " Share Price: $" << share_val
              << " Total Worth: $" << total_val << std::endl;
    std::cout.setf(orig);
    std::cout.precision(prec);
}

Stock::Stock(const std::string & co, long n, double pr) {
    acquire(co, n, pr);
}

Stock::~Stock() {
    std::cout << "Bye, " << company << "!" << std::endl;
}

const Stock &Stock::topval(const Stock & s) const {
    if (s.total_val > this->total_val) {
        return s;
    }
    return *this;
}

Stock::Stock() {

}
