//std::array
#include <iostream>
#include <array>
#include <algorithm>
#include <numeric> //for more algorithims like accumulate
// Display the array -- note size MUST be included
//when passing a std::array to a function
void display(const std::array<int, 5> &arr){
    std::cout << "[";
    for(const auto &i:arr)
        std::cout << i << " ";
        std::cout << "]" <<std::endl;
}

void test1() {
    std::cout << "\nTest=================================" <<std::endl;
    std::array<int,5> arr1 {1,2,3,4,5};
    std::array<int,5> arr2;
    
    display(arr1);
    display(arr2);
    
    arr2 = {10,20,30,40,20};
    
    std::cout << "Size of the array1 " << arr1.size() << std::endl;
    std::cout << "Size of the array2 " << arr2.size() << std::endl;

    arr1[0] =1000;
    arr1.at(1) = 2000;
    display(arr1);
    
    std::cout << "Front of arr2: " << arr2.front() <<std::endl;
    std::cout << "Back of arr2: " << arr2.back() << std::endl;
}

void test2(){
    std::cout << "\n==========================" <<std::endl;
    std::array<int,5> arr1 {1,2,3,4,5};
    std::array<int,5> arr2 {1,2,31,2,3};
    
    display(arr1);
    display(arr2);
    
    arr1.fill(0);
    display(arr1);
    display(arr2);
    
    arr1.swap(arr2);
    
    display(arr1);
    display(arr2);
}
void test3(){
    std::cout << "\n=======================" <<std::endl;
    std::array<int,5> arr1 {1,2,3,4,5};
    int *ptr = arr1.data();
    std::cout << ptr << std::endl;
    *ptr = 2000;
    display(arr1);
}

void test4(){
    std::cout << "\n====================" <<std::endl;
    std::array<int,5> arr {2,13,4,5,1};
    display(arr);
    
    std::sort(arr.begin(),arr.end());
    display(arr);
}

void test5(){
    std::cout << "\n=======================" <<std::endl;
    std::array<int,5> arr1 {2,1,4,3,5};
    std::array<int,5>::iterator min_num = std::min_element(arr1.begin(),arr1.end());
    auto max_num = std::max_element(arr1.begin(),arr1.end());
    
    std::cout << "min:" << *min_num << " max:" << *max_num <<std::endl;
}

void test6(){
    std::cout << "\n================================" <<std::endl;
    std::array<int,5> arr {2,1,3,3,5};
    
    auto adjacent = std::adjacent_find(arr.begin(),arr.end());
    if(adjacent!= arr.end())
        std::cout << "Adjacent element found with value" << *adjacent << std::endl;
    else 
        std::cout << "No adjacent element found" << std::endl;
}

void test7(){
    std::cout << "\n================================" <<std::endl;
    std::array<int,5> arr {2,1,3,3,5};
    
    //accumulate is from #include <numeric>
    
    int sum = std::accumulate(arr.begin(),arr.end(),0);
    
    std::cout << "Sum of the elements in arr is : " << sum << std::endl;
    
}

void test8(){
    std::cout << "\n================================" <<std::endl;
    std::array<int,5> arr {2,1,3,3,5};
    
    int count = std::count(arr.begin(),arr.end(),3);
    std::cout << "Count 3: " << count << std::endl;
}


int main(){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    
}