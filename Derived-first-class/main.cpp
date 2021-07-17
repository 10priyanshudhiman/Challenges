#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
using namespace std;

int main(){
    cout << "Account class ====================////" <<endl;
    Account acc{};
    acc.deposit(2000);
    acc.withdraw(500);
    cout <<endl;
    
    Account *acc_ptr{nullptr};
    acc_ptr = new Account();
    acc_ptr->deposit(3000);
    acc_ptr->withdraw(1000);
    delete acc_ptr;
    cout << endl;
    
    cout << "Savings_Account Class ===================////"<<endl;
    
    Savings_Account sav_acc{};
    sav_acc.deposit(1000);
    sav_acc.withdraw(200);
    cout << endl;
    
    Savings_Account *sv_ptr = new Savings_Account();
    sv_ptr->deposit(4000);
    sv_ptr->deposit(2000);
    delete sv_ptr;
    cout << endl;
}