//Algorithims
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

class Person {
  std::string name;
  int age;

public:
  Person() = default;
  Person(std::string name, int age)
  :name{name},age{age} {}
  bool operator<(const Person &rhs) const {
      return (this->age < rhs.age);
  }
  
  bool operator==(const Person &rhs)const {
      return (this->age == rhs.age && this->name == rhs.name);
  }

};

//Find an element in the conatiner
void find_test(){
    std::cout << "=========================" <<std::endl;
    std::vector<int> vec {1,2,3,4,5};
    
    auto loc = std::find(std::begin(vec), std::end(vec),12);
    
    if(loc!= end(vec))
        std::cout << "Found the number " << *loc <<std::endl;
    else
        std::cout << "Couldnot find the number " <<std::endl;
        
    std::list<Person> players {
      {"Deepak",12},
      {"Priyanshu",13},
      {"noName", 11}  
    };
    
    auto loc1 = std::find(std::begin(players),std::end(players),Person("Priyanshu",13));
    
    if(loc1 != end(players))
        std::cout << "Found Priyanshu" <<std::endl;
    else
        std:: cout << "Priyanshu not found" <<std::endl;
    
}

void count_test(){
    std::cout << "/========================" <<std::endl;
    std::vector<int> vec {1,2,3,4,5};
    
    int count = std::count(vec.begin(),vec.end(),1);
    std::cout << count << " Occurences found" <<std::endl;
}

void count_if_test(){
    std::cout << "/======================" <<std::endl;
    
    //count only if the element is even
    
    std::vector<int> vec {1,2,3,4,1,67,7,100};
    int num = std::count_if(vec.begin(),vec.end(),[](int x){return x%2 ==0;});
    std::cout << num << " Even numbers are found" <<std::endl;
}

void replace_test(){
    //Replace occurence of elements in a container
    std::cout << "/======================" <<std::endl;
    
    std::vector<int> vec {1,2,31,2,1,1,34,2,1};
    
    for(auto v:vec){
        std::cout << v << " ";
    }
    std::cout << std::endl;
    
    std::replace(vec.begin(),vec.end(),1,100);
    
    for(auto v:vec){
        std::cout << v << " ";
    }
    std::cout << std::endl;
}

void all_of_test(){
    std::cout << "/==================================" << std::endl;
    std::vector<int> vec {1,2,3,4,5,5,6,1,11,12};
    if(std::all_of(vec.begin(),vec.end(),[](int x){return x>10;}))
        std::cout << "All the elements are > 10" <<std::endl;
    else
        std::cout << "All the elements are < 10" <<std::endl;  
}

void string_transform_test(){
    std:: cout << "/=============================" <<std::endl;
    
    std::string str1 {"This is Test"};
    std::cout << "Before Transform: " << str1 << std::endl;
    std::transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    std::cout << "After transform:" <<str1 <<std::endl;
}
int main(){
    //find_test();
    //count_test();
    //count_if_test();
    //replace_test();
    //all_of_test();
    string_transform_test();
}