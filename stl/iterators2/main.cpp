//Iterators
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
using namespace std;

using namespace std;
//display any vector of integers using range based for loop
void display(const std::vector<int> &vec){
    cout << "[";
    for(auto const&i:vec){
        cout << i << " ";
    }
    cout << "]" <<endl;
}
void test1(){
    cout << "\n================================" <<endl;
    vector <int> nums1 {1,2,3,4,5};
    vector <int> :: iterator it = nums1.begin();
    
    cout << *it << endl;
    it++;
    cout << *it << endl;
    
    it += 2;
    cout << *it <<endl;
    
    it =  nums1.end()-1;
    cout << *it <<endl;
} 

void test2(){
    vector <int> nums1 {1,2,3,4,5};
    auto it = nums1.begin();
    while(it != nums1.end()){
        cout << *it <<endl;
        it++;
    }
    //change all vector elements to zero
    it = nums1.begin();
    while(it != nums1.end()){
        *it = 0;
        it++;
    }
    display(nums1);
}

void test3(){
    //more iterators
    //using a reverse iterator
    vector<int> vec{1,2,3,4,5};
    auto it1 = vec.rbegin();
    while(it1 != vec.rend()){
        cout << *it1 << endl;
        it1++;
    }
    
    //const reverse iterator over a list
    std::list <std::string> name{"larry","moe","curly"};
    auto it2 = name.crbegin(); //iterator move to strings point to Curly
    cout << *it2 << endl;
    it2++;
    cout << *it2 <<endl;
    
    //iterator over a map
    std::map<std::string,std::string> favorites{
        {"Frank", "c++"},
        {"Bill", "java"},
        {"james","haskel"}
    };
    
    auto it3 = favorites.begin(); // iterator over map of strings, map pair
    while(it3 != favorites.end()){
        cout << it3->first << ":" << it3->second <<endl;
        it3++;
    }
    
}

void test4(){
    //iterate over the subset of the conatiner
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin() +2;
    auto end = vec.end() -3;
    
    while(start != end){
        cout << *start <<endl;
        start ++;
    }
}




 
int main() {
     //test1();
     //test2();
     //test3();
     test4();
 }