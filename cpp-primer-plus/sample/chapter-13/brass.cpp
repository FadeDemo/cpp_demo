#include <iostream>
#include "brass.h"

using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setformat();

void restore(format, precis);

Brass::Brass(const string & s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt) {
    if (amt < 0)
    {
        cout << "Negative deposit not allowed; "
             << "deposit is cancelled." << endl;
    }
    else
    {
        balance += amt;
    }
}

void Brass::Withdraw(double amt) {
    format initalState = setformat();
    precis prec = cout.precision(2);
    if (amt < 0)
    {
        cout << "Withdrawal amount must be positive; "
             << "withdrawal canceled." << endl;
    } else if (amt <= balance)
    {
        balance -= amt;
    } else
    {
        cout << "Withdrawal amount of $" << amt 
             << " exceeds your balance." << endl
             << "Withdrawal canceled." << endl;
    }
    restore(initalState, prec);
}

double Brass::Balance() const {
    return balance;
}

void Brass::ViewAcct() const {
    format initialState = setformat();
    precis prec = cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl
         << "Balance: $" << balance << endl;
    restore(initialState, prec);
}

BrassPlus::BrassPlus(const std::string & s, long an, double bal, double ml, double r) : Brass(s, an, bal) 
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r) : Brass(ba) {
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const {
    format initialState = setformat();
    precis prec = cout.precision(2);
    Brass::ViewAcct();
    cout << "Maximum loan: $" << maxLoan << endl
         << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "%" << endl;
    restore(initialState, prec);     
}

void BrassPlus::Withdraw(double amt) {
    format initalState = setformat();
    precis prec = cout.precision(2);
    double bal = Balance();
    if (amt < bal)
    {
        Brass::Withdraw(amt);
    } else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl
             << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);     
    } else
    {
        cout << "Credit limit exceeded. Transaction cancelled." << endl;
    }
    restore(initalState, prec);
}

format setformat() {
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p) {
    cout.setf(f);
    cout.precision(p);
}