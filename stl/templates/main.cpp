#include <iostream>
#include <string>


template<typename T>
T min(T a, T b){
    return (a < b)? a:b;
}

template<typename T1,typename T2>
void func(T1 a,T2 b){
    std:: cout << a << " " << b << std::endl;
}

struct Person {
    std::string name;
    int age;
    bool operator<(const Person &rhs)const{
        return this->age < rhs.age;
    }
};

std:: ostream &operator<<(std::ostream &os, const Person &p){
    os << p.name;
    return os;
} 

int main() {
    Person p1{"Priyanshu", 19};
    Person p2{"Dhiman", 20};
    Person p3 = min(p1,p2);
    
    func(p1,p2);
    
    
	std::cout << min<int>(2,3) <<std::endl;
    
    func<int,int>(2,3);
    
     

}

