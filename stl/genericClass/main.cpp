#include <bits/stdc++.h>
 using namespace std;
 
 template <typename T>
 class Item {
private:
string name;
T value;
public:
     Item(string name,T value)
       :name{name},value{value} 
       {}
     string get_name() const {return name; }
     T get_value() const {return value;}
 };
 
 template<typename T1, typename T2>
 struct My_pair {
     T1 first;
     T2 second;
 };
 
 int main() {
     Item <int> p1 {"Priyanshu",12};
     My_pair<string,int> p2 {"Priyanshu",18};
     cout << p1.get_name();
     
 }