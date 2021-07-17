#ifndef _Savings_Account_
#define _Savings_Account_
#include "Account.h"
class Savings_Account
{
public:
    double int_rate;
    Savings_Account();
    
    ~Savings_Account();
    
    void deposit(double amount);
    void withdraw(double amount);

};

#endif // _Savings_Account_
