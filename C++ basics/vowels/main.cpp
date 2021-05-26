#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
    char my_string[50]{};
    int number_of_vowels {0};
    int count{0};
    
    cout << "Enter the string : ";
    cin.get(my_string,50);
    for(size_t i =0; i< strlen(my_string);i++){
        if(my_string[i] == 'a' || my_string[i] ==  'e' || my_string[i] == 'i'|| my_string[i] ==  'o' || my_string[i] ==  'u'){
            number_of_vowels ++;
        }
    }
    cout << "Number of vowels are : " << number_of_vowels <<endl;  
    for(size_t i =0; i< strlen(my_string);i++){
        if(my_string[i] == 'a'){
            count ++;
        }
    }
    cout << "Number of vowel 'a' is: " << count <<endl; 
    count =0;
    for(size_t i =0; i< strlen(my_string);i++){
        if(my_string[i] == 'e'){
            count ++;
        }
    }
    cout << "Number of vowel 'e' is: " << count <<endl;
    count =0;
    for(size_t i =0; i< strlen(my_string);i++){
        if(my_string[i] == 'i'){
            count ++;
        }
    }
    cout << "Number of vowel 'i' is: " << count <<endl;
    count = 0;
    for(size_t i =0; i< strlen(my_string);i++){
        if(my_string[i] == 'o'){
            count ++;
        }
    }
    cout << "Number of vowel 'o' is: " << count <<endl;
    count =0;
    for(size_t i =0; i< strlen(my_string);i++){
        if(my_string[i] == 'u'){
            count ++;
        }
    }
    cout << "Number of vowel 'u' is: " << count <<endl;
}