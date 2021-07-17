#include <iostream>
#include "Account.h"


Account::Account()
:balance{20.0},name {"An account"}{
}

Account::~Account()
{
}

void Account::deposit(double amount){
    std::cout << "The deposit amount is " << amount << std::endl;
}
void Account::withdraw(double amount){
    std::cout << "The Withdraw amount is " << amount << std::endl;
}

