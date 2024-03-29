#include <iostream>
#include <initializer_list>

double sum(std::initializer_list<double>);
double average(const std::initializer_list<double> &);

int main() {
    using std::cout;
    cout << "List 1: sum = " << sum({2, 3, 4})
    << ", ave = " << average({2, 3, 4}) << '\n';
    std::initializer_list<double> dl = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    cout << "List 2: sum = " << sum(dl) << ", ave = " << average(dl) << '\n';
    dl = { 16.0, 25.0, 36.0, 40.0, 64.0 };
    cout << "List 3: sum = " << sum(dl) << ", ave = " << average(dl) << "\n";
    return 0;
}

double sum(std::initializer_list<double> il) {
    double tot = 0;
    for (auto p = il.begin(); p != il.end(); p++) {
        tot += *p;
    }
    return tot;
}

double average(const std::initializer_list<double> & ril) {
    double tot = sum(ril);
    double ave = 0.0;
    if (ril.size())
    {
        ave = tot / ril.size();
    }
    return ave;
}