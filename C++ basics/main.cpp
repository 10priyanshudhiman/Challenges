#include <iostream>
#include <string>
#include <vector>

//Dynamic Memory
using namespace std;

int main(){
//    int *int_ptr {nullptr};
//    
//    int_ptr = new int;
//    cout << int_ptr << endl;
//    delete int_ptr;
//    
//    size_t size{0};
//    double *temp_ptr{nullptr};
//    cout << "How many temps?";
//    cin >> size;
//    
//    temp_ptr = new double[size];
//    cout << temp_ptr << endl;
      
     ////******************  Refernces ********************//////
     
     int num{100};
     int &ref{num};
     
     cout << num << endl;
     cout << ref << endl;
     
     num=200;
     cout << "\n-----------------------------"<< endl;
     cout << num << endl;
     cout << ref << endl;
     
     ref = 300;
     cout << "\n-----------------------------"<< endl;
     cout << num << endl;
     cout << ref << endl;
     
     cout << "\n-----------------------------"<< endl;
     
     


}