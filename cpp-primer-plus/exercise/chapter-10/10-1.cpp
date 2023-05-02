//
// Created by fade on 2023/5/2.
//
#include "BankAccount.h"
#include <iostream>
int main()
{
    BankAccount bankAccount("fade", "7758258");
    bankAccount.display();
    std::cout << "Before deposit" << std::endl;
    bankAccount.deposit(50);
    std::cout << "After deposit" << std::endl;
    bankAccount.display();
    std::cout << "Before withdraw" << std::endl;
    bankAccount.withdraw(20);
    std::cout << "After withdraw" << std::endl;
    bankAccount.display();
    return 0;
}