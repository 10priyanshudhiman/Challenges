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

 
int main() {
     test1();
 }