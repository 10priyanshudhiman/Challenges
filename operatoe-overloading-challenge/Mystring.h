#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>

using namespace std;
class Mystring
{
    friend ostream &operator<<(ostream &os, const Mystring &rhs);
    friend istream &operator>>(istream &is, Mystring &rhs);
private:
    char *str;
public:
   
    Mystring(); //constructor
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs); //copy assignment
    Mystring &operator=(Mystring &&rhs); //Move assignment
    
    Mystring operator-()const;    //make lowercase
    bool operator==(const Mystring &rhs)const;  //boolean operator
    bool operator !=(const Mystring &rhs)const; // notequal operator
    bool operator <(const Mystring &rhs)const; // less than operator
    bool operator >(const Mystring &rhs)const; // greater than operator
    Mystring operator+(const Mystring &rhs)const; //concatenate
    Mystring operator +=(const Mystring &rhs)const; //plus equals
    void display() const;
    
    int get_length() const;
    const char*get_str() const;

};

#endif // _MYSTRING_H_
