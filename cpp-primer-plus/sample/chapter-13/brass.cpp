#include <iostream>
#include "brass.h"

using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setformat();

void restore(format f, precis p);

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

