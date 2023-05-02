//
// Created by fade on 2023/5/2.
//

#include "BankAccount.h"
#include <iostream>
BankAccount::BankAccount(std::string name, std::string account, double saving) {
    this->name = name;
    this->account = account;
    this->saving = saving;
}
void BankAccount::display() const {
    using std::cout;
    using std::endl;
    auto setting = cout.setf(std::ios::floatfield, std::ios::fixed);
    auto precision = cout.precision(2);
    cout << "name: " << this->name << endl
         << "account: " << this->account << endl
         << "saving: $" << this->saving << endl;
    cout.setf(setting);
    cout.precision(precision);
}
void BankAccount::deposit(double saving) {
    this->saving += saving;
    std::cout << "deposit $" << saving << std::endl;
}
void BankAccount::withdraw(double saving) {
    if (this->saving > saving) {
        this->saving -= saving;
        std::cout << "withdraw $" << saving << std::endl;
    } else {
        std::cout << "Saving is not enough." << std::endl;
    }
}