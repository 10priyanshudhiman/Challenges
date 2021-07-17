#include "Mystring.h"
#include <iostream>
#include <cstring>

//no args constructor
Mystring::Mystring()
    :str{nullptr} {
        str = new char[1];
        *str = '\0';
    }

// Overloaded constructor
Mystring::Mystring(const char *s)
       :str{nullptr} {
           if(s== nullptr){
               s = new char [1];
               *str = '\0';
           } else {
               str = new char [std::strlen(s) +1];
               std::strcpy(str,s);
           }
       }
  // copy cstr
Mystring::Mystring (const Mystring &source)
            :str{nullptr} {
                    str = new char[std::strlen(source.str) +1];
                    std::strcpy(str, source.str);
                }
                 
       //Destrr
       
 Mystring:: ~Mystring(){
//     if(str == nullptr){
//         std::cout << "Calling destructor for Mystring : nullptr" << std::endl;
//     } else{
//         std:: cout << "Calling destructor for Mystring : "<< str << std::endl;
//     }
     delete [] str;
 }
 
 //Move ctr
 
 Mystring::Mystring(Mystring &&source)
         :str(source.str) {
             source.str = nullptr;
             std::cout << "Move constructor used" <<std::endl;
             
         }

//Display method

void Mystring:: display() const{
    std::cout <<str << ":" << get_length() << std::endl;
}

//Copy assignment

Mystring &Mystring::operator=(const Mystring &rhs){
    if(this == &rhs){
        return *this;
    }else{
        delete [] this->str;
        str  =new char [std::strlen(rhs.str) +1];
        std::strcpy(this->str, rhs.str);
        return *this;
    }
}


//length getter
int Mystring::get_length() const{return std::strlen(str);}

//string getter
const char *Mystring::get_str() const{return str;} 

//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout <<"using move assignment" <<std::endl;
    if(this == &rhs)
        return *this;
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
        return *this;
} 

//insertion overloading

std::ostream &operator << (std::ostream &os, const Mystring &rhs){
    os << rhs.str;
    return os;
}

//overloadind extraction operator

std::istream &operator >> (std::istream &is, const Mystring &rhs){
    char *buff = new char[1000];
    is >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return is;
}