//
// Created by fade on 2023/5/2.
//
#include <iostream>
#include "stock00.h"
const int STKS = 4;
int main()
{
    Stock stocks[STKS] {
        Stock("NanoSmart", 12, 20.0),
        {"Boffo Objects", 200, 2.0},
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };
    std::cout << "Stock holdings:" << std::endl;
    for (const auto & stock : stocks) {
        stock.show();
    }
    const Stock * top = &stocks[0];
    for (int i = 1; i < STKS; ++i) {
        top = &(top->topval(stocks[i]));
    }
    std::cout << "\nMost valuable holding:" << std::endl;
    top->show();
    return 0;
}