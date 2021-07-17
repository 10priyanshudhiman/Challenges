#include "Mystring.h"
#include <iostream>
#include <cstring>
#include <cctype>

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

// Equality
bool Mystring::operator==(const Mystring &rhs)const {
    return(std::strcmp(str,rhs.str)== 0);
}

//Make lowercase
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff,str);
    for(size_t i=0; i<std::strlen(buff);i++)
        buff[i] =std::tolower(buff[i]);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//concatenate
//Mystring Mystring::operator+(const Mystring &rhs) const {
//    char *buff = new char [std::strlen(str)+std::strlen(rhs.str)+1];
//    std::strcpy(buff,str);
//    std::strcat(buff,rhs.str);
//    Mystring temp {buff};
//    delete [] buff;
//    return temp;
//}

//not equal
bool Mystring :: operator!=(const Mystring &rhs) const {
    return(std::strcmp(str,rhs.str) != 0);
}

//lexically less than
bool Mystring:: operator <(const Mystring &rhs) const{
    if(std::strcmp(str,rhs.str)==0){
        return false;
    } else{
        char *buff = new char[std::strlen(str) + 1];
        std::strcpy(buff,str);
        if(buff[0] < rhs.str[0] ){
            delete [] buff;
            return true;
        }
        
    }
}

//lexically greater than
bool Mystring:: operator >(const Mystring &rhs) const{
    if(std::strcmp(str,rhs.str)==0){
        return false;
    } else{
        char *buff = new char[std::strlen(str) + 1];
        std::strcpy(buff,str);
        if(buff[0] > rhs.str[0] ){
            delete [] buff;
            return true;
        }
        
    }
}
// binary as non -member function
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[strlen(lhs.str)+strlen(rhs.str)+1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}
// += concatenate operator

Mystring operator+=(const Mystring &lhs, const Mystring &rhs){
    std::strcat(lhs.str,rhs.str);
    return lhs.str;  //check here!!!
}
// *operator
Mystring Mystring::operator*(int size){
    char*buff = new char[strlen(str)*size+1];
    std::strcpy(buff,"");
    for(size_t i =1; i<=size;i++){
        std::strcat(buff,str);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// *= operator
Mystring &Mystring::operator*=(int n){
    *this = *this*n;
    return *this;
}


Mystring &Mystring::operator++(){
     for(size_t i =0; i<std::strlen(str);i++){
         str[i] = std::toupper(str[i]);
     }
    return *this;
}

Mystring Mystring::operator++(int){
    Mystring temp(*this); //make copy
    operator++();
    return temp;
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