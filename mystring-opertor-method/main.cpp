#include <iostream>
#include "Mystring.h"
using namespace std;

int main(){
    
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;
    
    cout << "Enter the third stooge first name:";
    cin >> curly;
    
    cout << "Three stooges are " << larry << "," << moe << ",and"<< curly << endl;
     
    cout << "Enter the three stooges names seperated by spaces: ";
    cin >> larry>> moe>> curly;
    
     cout << "The three stooges are " << larry << "," << moe << ",and" <<curly << endl;
     return 0; 
}