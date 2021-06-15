#include <iostream>
#include <string>


template <typename T>
T min(T a, T b){
    return (a<b) ? a:b;
}

template <typename T1,typename T2>
void func(T1 a, T2 b){
    std::cout << a << " " << b <<std::endl;
}

int main(){
    std::cout << min<int>(3,4) << std::endl;
    //cout << min(2,4) <<endl;
    //cout << min('A','B') <<endl;
    //cout << min(12.5,9.2) <<endl;
}