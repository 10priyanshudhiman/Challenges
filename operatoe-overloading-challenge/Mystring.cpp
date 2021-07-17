#include "Mystring.h"
#include <string>
#include <cstring>


Mystring::Mystring()
:str{nullptr}{
    str = new char[1];
    *str = '\0';
}
Mystring::Mystring(const char *s)
       :str{nullptr}{
    str = new char[strlen(s) +1];
    std::strcpy(str,s);
}

//copy constructor

Mystring::Mystring(const Mystring &source)
   :str{nullptr}{
       if(str ==nullptr){
           str = new char[1];
           *str = '\0';
       }
       else{
           str =new char[strlen(source.str) +1];
           std::strcpy(str,source.str);
       }
    
}

// Move constructor

Mystring::Mystring(Mystring &&rhs)
:str{nullptr}{
    str = new char[strlen(rhs.str) +1];
    str = rhs.str;
    rhs.str =nullptr;
    std::strcpy(str,rhs.str);
    
}
//copy assignment 
Mystring&Mystring::operator=(const Mystring &rhs){
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = new char[strlen(rhs.str)+1];
    std::strcpy(str,rhs.str);
    return *this;
}

//Move assignment
Mystring&Mystring::operator=(Mystring&&rhs){
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
    
}
//make lowercase

Mystring Mystring::operator-()const{
    char *buff = new char[strlen(str) +1];
    std::strcpy(buff,str);
    
    for(size_t i=0;i<strlen(str);i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//boolean operator
bool Mystring::operator==(const Mystring &rhs)const{
    if(std::strcmp(str,rhs.str)== 0){
        return true;
    }
    else{
        return false;
    }
}

//not equal operator
bool Mystring::operator!=(const Mystring &rhs)const{
    if(std::strcmp(str,rhs.str)==0){
        return false;
    } else{
        return true;
    }
}
//less than operator

bool Mystring::operator<(const Mystring&rhs)const{
    if(str[0]<rhs.str[0]){
        return true;
        
    }
    else{
        return false;
    }
}

//greater than operator
bool Mystring::operator>(const Mystring&rhs)const{
    if(str[0]>rhs.str[0]){
        return true;
        
    }
    else{
        return false;
    }
}
Mystring Mystring :: operator + (const Mystring&rhs)const{
    size_t buff_size = (strlen(rhs.str)+strlen(str)+1);
    char *buff = new char[buff_size];
    std::strcpy(buff,str);
    std::strcat(buff,rhs.str);
    
    Mystring temp{buff};
    delete [] str;
    return temp;

}
Mystring Mystring :: operator +=(const Mystring &rhs)const{
     size_t buff_size = (strlen(rhs.str)+strlen(str)+1);
    char *buff = new char[buff_size];
    std::strcpy(buff,str);
    std::strcat(buff,rhs.str);
    
    Mystring temp{buff};
    delete [] str;
    return temp;
}

Mystring::~Mystring()
{
    delete  []str;
}

void Mystring::display() const{
    cout << str << endl;
}

//Mystring::ostream &operator<<(ostream &os, const Mystring &rhs){
//    os << rhs.str;
//    return os;
//}