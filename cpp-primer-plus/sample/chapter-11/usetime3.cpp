//
// Created by fade on 2023/5/3.
//
#include <iostream>
#include "mytime3.h"
int main()
{
    using std::cout;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << std::endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp;
    cout << "10.0 * Tosca: " << 10.0 * tosca << std::endl;
    return 0;
}