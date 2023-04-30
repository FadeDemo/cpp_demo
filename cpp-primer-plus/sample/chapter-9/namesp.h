//
// Created by fade on 2023/4/30.
//

#ifndef CPP_DEMO_NAMESP_H
#define CPP_DEMO_NAMESP_H
#include <string>
namespace pers {
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &);
    void showPerson(const Person &);
}
namespace debts {
    using namespace pers;
    struct Debt
    {
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt [], int);
}
#endif //CPP_DEMO_NAMESP_H
