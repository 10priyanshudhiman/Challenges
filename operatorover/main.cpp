#include <iostream>
#include "Mystring.h"
#include <cstring>

using namespace std;

int main(){
    
    cout << boolalpha <<endl;
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    
    Mystring stooge = larry;
    larry.display();
    moe.display();
    
    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;
    
    larry.display();
    Mystring larry2 = -larry;
    larry2.display();
    
   // Mystring stooges = larry + "Moe";                //ok with member
    //Mystring stooges = "Larry" + moe;              //compiler error
    
   // Mystring two_stooges = moe + " " + "Larry";
    //two_stooges.display();
    
   // Mystring three_stooges = moe + " " + larry + " " + "Curly";
   // three_stooges.display();
    
    cout << (larry != moe) <<endl;
    cout << (larry < moe) <<endl;
    cout << (larry > moe) <<endl;
    
    Mystring yourName = larry + moe;
    yourName.display();
    larry+= moe;
    larry.display();
    
    Mystring l1;
    l1 = larry*3;
    l1.display();
    
    Mystring stooges {"Priyanshu"};
    stooges*=2;
    ++stooges;
    stooges.display();
    
    return 0;
    
    
    
    
//    Mystring a {"hello"};
//    Mystring b;
//    b =a;
//    
//    b = "This is a test";
//    Mystring empty;
//    Mystring larry{"Larry"};
//    Mystring stooge{larry};
//    
//    empty.display();
//    larry.display();
//    stooge.display();
//    
//    char *mystring {"Hello"};
//    cout << strlen(mystring);
    
    return 0;
}