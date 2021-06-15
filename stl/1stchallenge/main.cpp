// pallimdrone challenge 1
#include <iostream>
#include <cctype>
#include <deque>
#include <string>
#include <vector>
#include <iomanip>

bool is_pallindrome(const std::string &s){
    
    /*********THIS IS MY SOLUTION******************* WHICH IS WRONG AT SOME CASES
    int l  = s.length();
    int k = l;
    int i = 0;
    int flag;
    char c;
    std::deque<char> myChar {};
    while(i < l){
        myChar.push_front(s[i]);
        c = myChar.front();
        i++;
        if(c == s[k-1])
            flag =1;
        else 
            flag =0;
        k--;
    }
    if (flag ==1)
        return true;
    if(flag ==0)
        return false;
    ************************************/
    
    /********THIS IS ANOTHER SOLUTION ******/
    
    std::deque<char> d;
    //add all the characters that are alpha to the back of the deque in uppercase
    for(char c:s)
        if(std::isalpha(c))
            d.push_back(std::toupper(c));
    
    char c1{};
    char c2{};
    
    //while are more than 1 characters in the deque
    // remove and compare the front and the back characters
    // if they are not same -return false since it cannot be a pallindrome
    
    while(d.size() >1){
        char c1 = d.front();
        char c2 = d.back();
        
        d.pop_front();
        d.pop_back();
        
        if(c1 != c2)
            return false;
    }
    return true;
}

int main(){
    std::vector<std::string> test_strings {"a", "aa","aba","abba","abbcbba","ab","abc","radar","ana",
    "avid diva","Amore Roma","A Toyota's a toyota","A Santa at NASA","C++",
    "A man,a plan,a cat,a ham,a yak,a yam, a hat, a canal-Panama!", "This is a pallindrome","pallindrome"};
    
    
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    
    for(const auto &s:test_strings){
        std::cout << std::setw(8) << std::left << is_pallindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    
    
}