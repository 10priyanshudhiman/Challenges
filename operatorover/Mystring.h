#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
  
{
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
  friend Mystring operator+=(const Mystring &lhs, const Mystring &rhs);
  
    char *str;
public:
    Mystring(); // nclTabCtrlo args
    Mystring(const char *s);
    Mystring(const Mystring &source); //copy cstr
    Mystring(Mystring &&source);   //Move constructor
    ~Mystring();
    
    
    Mystring &operator=(const Mystring &rhs); //copy assignment
    Mystring &operator=(Mystring &&rhs);   //Move asssignment
    
    Mystring operator-()const;          //make lowercase
   // Mystring operator+(const Mystring &rhs) const; // concatenate
    bool operator ==(const Mystring &rhs) const;
    bool operator !=(const Mystring &rhs) const;
    bool operator <(const Mystring &rhs) const;
    bool operator >(const Mystring &rhs) const;
    Mystring operator*(int size);
    Mystring &operator*=(int n);
    Mystring &operator++();
    Mystring operator++(int);
    
    void display() const;
    int get_length() const;        //getters
    const char *get_str() const;

};

#endif // _MYSTRING_H_
