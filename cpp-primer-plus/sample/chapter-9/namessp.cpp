//
// Created by fade on 2023/4/30.
//
#include <iostream>
#include "namesp.h"
void other();
void another();
int main()
{
    using debts::Debt;
    using debts::showDebt;
    Debt golf = {
            {"Benny", "Goatsniff"}, 120.0
    };
    showDebt(golf);
    other();
    another();
    return 0;
}
void other() {
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    for (auto & i : zippy) {
        getDebt(i);
    }
    for (const auto & i: zippy) {
        showDebt(i);
    }
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
}
void another() {
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
}