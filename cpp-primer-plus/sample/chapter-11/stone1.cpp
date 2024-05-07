//
// Created by fade on 2023/5/3.
//
#include <iostream>
#include "stonewt1.h"
int main()
{
    using std::cout;
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n";
    cout << "Poppins: " << poppins.operator int() << " pounds.\n";
    return 0;
}