//Deque
#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

//template function to display any deque
template <typename T>
void display(const std::deque<T> &d) {
    std::cout << "[";
    for(const auto &elem:d)
        std::cout << elem << " ";
    std::cout << "]" << std::endl;
}

void test1(){
    std::cout << "\n=================================" <<std::endl;
    //push and pops
    
    std::deque <int> d{0,0,0};
    display(d);
    
    d.push_back(10);
    d.push_back(20);
    display(d);
    
    d.push_front(100);
    d.push_front(200);
    display(d);
    
    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back: " << d.back() << std::endl;
    std::cout << "Size: " << d.size() << std::endl;
    
    display(d);
}

void test2(){
    //insert all even numbers to the back of the deque
    //odd numbers to the front
    std::cout << "\n=================================" << std::endl;
    std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    std::deque <int> d;
    
    for(const auto &elem:vec){
        if(elem %2 == 0){
            d.push_back(elem);
        }
        else
            d.push_front(elem);
    }
    display(d);
}

void test3(){
    std::cout << "\n=====================================" <<std::endl;
    std::vector <int> vec{1,2,3,4,5,6,7,8,9,10};
    std::deque <int> d;
    
    std::copy(vec.begin(),vec.end(),std::front_inserter(d));
    display(d);
    
    d.clear();
    
    std::copy(vec.begin(),vec.end(),std::back_inserter(d));
    display(d);
}

int main(){
    test1();
    test2();
    test3();
}

