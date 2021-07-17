#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>
using namespace std;

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator >> (std::istream &is, Mystring &rhs);
    
char *str;
public:
    Mystring(); // nclTabCtrlo args
    Mystring(const char *s);
    Mystring(const Mystring &source); //copy cstr
    Mystring(Mystring &&source);   //Move constructor
    ~Mystring();
    
    
    Mystring &operator=(const Mystring &rhs); //copy assignment
    Mystring &operator=(Mystring &&rhs);   //Move asssignment
    
    void display() const;
    int get_length() const;        //getters
    const char *get_str() const;

};

#endif // _MYSTRING_H_
