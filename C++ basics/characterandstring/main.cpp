#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> // for character-based functions.


using namespace std;


int main(){
    char full_name [50] {};
    char temp [50] {};
    cout << "Enter your full name : ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name <<endl;
    cout << "-------------------------------" << endl;
    
    strcpy(temp, full_name);
    if(strcmp(temp,full_name) == 0){
        cout << "Both the strings " << temp << " and " << full_name <<" are same." << endl;
    }else{
        cout << "Both the strings " << temp << " and " << full_name <<" are not same." << endl;
    }
    
    for(size_t i{0}; i<strlen(full_name); ++i){
        if(isalpha(full_name[i]))
        full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name <<endl;
    
    
    
}