#include <iostream>
#include "Mystring.h"
using namespace std;

int main(){
    Mystring m;
    Mystring p{"Priyanshu"};
    
    m=p;
    m.display();
    Mystring p1;
    p1 = Mystring{"Dhiman"};
    p1.display();
    
    Mystring a{"PRIYANSHU DHIMAN"};
    Mystring a1 = -a;
    a1.display();
    
    if ((a != p1)){
        cout << "true" <<endl;
    }else{
        cout << "false" << endl;
    }
    
   cout << (p1>a) <<endl;
   Mystring v;
   v = p1 + a;
   v.display();
   
   v += a;
   v.display();
    
}