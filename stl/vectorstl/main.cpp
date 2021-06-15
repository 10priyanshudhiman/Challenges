#include <iostream>
#include <algorithm>
#include <vector>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
    
public:
    Person()  = default;
    Person(std::string name, int age)
    :name{name},age{age} {}
    bool operator < (const Person &rhs)const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs)const {
        return (this->age == rhs.age && this->name == rhs.name);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p){
    os << p.name << ":" << p.age;
    return os;
}

// Use for_each and a lambda expression to display vector elements
void display2(const std::vector<int> &vec){
    std::cout << "[";
    std::for_each(vec.begin(),vec.end(),
    [](int x){std::cout << x << " ";});
    
    std::cout << "]" << std::endl;
}

//template function to display any vector
template <typename T>
void display(const std::vector<T> &vec){
    std::cout << "[";
    for(const auto &elem:vec)
        std::cout << elem << " ";
    std::cout << "]" <<std::endl;
}

void test1(){
    std::cout << "\nTest1=================================================" <<std::endl;
    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    
    vec = {2,3,4,5};
    display2(vec);
    
    std::vector<int> vec1(10,100);
    display(vec1);
}

void test2(){
    std::cout << "\n==================================================" <<std::endl;
    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    std::cout << "\nvec size:" << vec.size() <<std::endl;
    std::cout << "vec max size:" << vec.max_size() <<std::endl;
    std::cout << "vec capacity" << vec.capacity() << std::endl;
    
    vec.push_back(6);
    display(vec);
    std::cout << "\nvec size:" << vec.size() <<std::endl;
    std::cout << "vec max size:" << vec.max_size() <<std::endl;
    std::cout << "vec capacity" << vec.capacity() << std::endl;
    
    vec.shrink_to_fit();
    display(vec);
    std::cout << "\nvec size:" << vec.size() <<std::endl;
    std::cout << "vec max size:" << vec.max_size() <<std::endl;
    std::cout << "vec capacity" << vec.capacity() << std::endl;
    
    vec.reserve(100);
    display(vec);
    std::cout << "\nvec size:" << vec.size() <<std::endl;
    std::cout << "vec max size:" << vec.max_size() <<std::endl;
    std::cout << "vec capacity" << vec.capacity() << std::endl;
}

void test3(){
    std::cout << "\n=================================" <<std::endl;
    std::vector<Person> stooges;
    
    Person p1 {"Larry",18};
    display(stooges);
    stooges.push_back(p1);
    display(stooges);
    
    stooges.push_back(Person{"Moe",25});
    display(stooges);
    
    stooges.emplace_back("Curly",21);
    display(stooges);
}

void test4(){
    std::cout << "\n======================================"<<std::endl;
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    display(vec);
    vec.erase(vec.begin(),vec.begin()+2);
    display(vec);
    
    vec = {1,2,3,4,5,6,7,8,9,10};
    auto it = vec.begin();
    while(it != vec.end()){
        if(*it %2 == 0)
            vec.erase(it);
        else
            it++;
    }
    display(vec);
}

void test5(){
    std::cout << "\n====================================" << std::endl;
    std::vector<int> vec1 {1,2,3,4,5,6};
    std::vector<int> vec2 {10,20,30,40};
    
    display(vec1);
    display(vec2);
    
    std::cout << std::endl;
    
    std::copy(vec1.begin(),vec1.end(),std::back_inserter(vec2));
    display(vec1);
    display(vec2);
    
    //copy_if just add the lamda expression using a , and apply condition
}

void test6(){
    std::cout << "\n==============================" <<std::endl;
    //transform over two ranges
    
    std::vector<int> vec1{1,2,3,4,5};
    std::vector<int> vec2{10,20,30,40,50};
    
    std::vector<int> vec3;
    
    std::transform(vec1.begin(),vec1.end(),vec2.begin(),std::back_inserter(vec3),[](int x ,int y){return x*y;});
    display(vec3);
}





int main(){
    //test1();
    //test2();
    //test3();
    //test4();
    test5();
    test6();
    
}