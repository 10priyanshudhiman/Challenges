#include <iostream>
#include <string>
using namespace std;

template <typename T>
T Min(T a, T b){
    return(a<b) ? a:b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
    cout << a << " " << b <<endl;
}

struct Person {
    string name;
    int age;
    bool operator<(const Person &rhs)const {
        return this->age < rhs.age;
    }
};

ostream &operator<<(ostream &os,const Person &p){
    os << p.name;
    return os;
}

int main(){
    Person p1{"Curly",50};
    Person p2{"Moe",100};
    func(p1,p2);
    
    Person p3 =  Min(p1,p2);
    cout << p3.name << " is younger" <<endl;
    
    cout << Min<int>(2,3) <<endl;
    cout << Min(2,3) << endl;
    cout << Min('A','B') <<endl;
    cout << Min(12.5,9.2) <<endl;
    cout << Min(5+2*2, 7+40) <<endl;
    
    func <int,int>(10,20);
}