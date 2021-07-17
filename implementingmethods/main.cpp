#include <iostream>
#include "Account.h"
using namespace std;



int main(){
     Account priyanshu_account;
    priyanshu_account.set_name("Priyanshu");
    priyanshu_account.set_balance(1000.0);
    
    if(priyanshu_account.deposit(200.0))
        cout << "Deposit OK" << endl;
        else
            cout << "Deposit Not allowed " << endl;
            
            
     if(priyanshu_account.withdraw(500.0))
              cout << "Withdraw Ok" <<endl;
       else 
            cout << "Not sufficient funds" << endl;
     
     if(priyanshu_account.withdraw(1500.0))
          cout << "Withdraw Ok" << endl;
     else 
         cout << "Not sufficient funds" << endl;   
}