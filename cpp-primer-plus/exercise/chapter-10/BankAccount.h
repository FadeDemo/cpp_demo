//
// Created by fade on 2023/5/2.
//

#ifndef CPP_DEMO_BANKACCOUNT_H
#define CPP_DEMO_BANKACCOUNT_H
#include <string>
class BankAccount {
      std::string name;
      std::string account;
      double saving;
public:
    BankAccount(std::string, std::string, double saving = 0);
    void display() const;
    void deposit(double);
    void withdraw(double);
};
#endif //CPP_DEMO_BANKACCOUNT_H
