#ifndef _ACCOUNT_H
#define _ACCOUNT_H

class Account
{
public:
    double balance;
    std::string name;

    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();

};

#endif // _ACCOUNT_H
