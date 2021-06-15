#include <iostream>
#include <stack>
#include <queue>
#include <cctype>
#include <string>
#include <iomanip>

bool is_pallindrome(const std::string &s){
    
    // my solution
//    std::string s3,s4;
//    std::stack <char> s1;
//    std::queue <char> q1;
//    for(auto &c:s){
//        if(isalpha(c)){
//            q1.push(toupper(c));
//        }
//    }
//    
//    while(!q1.empty()){
//        s1.push(q1.front());
//        s3 = s3 + q1.front();
//        q1.pop();
//    }
//     
////     std::cout << s3 << std::endl;
//     
//    while(!s1.empty()){
//        s4 = s4 + s1.top();
//        s1.pop();
//    }
//    
//    if(s3 == s4){
//        return true;
//    }
//    else {
//        return false;
//    }

     std::stack<char> stk;
     std::queue<char> q;
     
     //add all the string characters that are alpha to the back of the queue in the uppercase
     //push all the string characters that are alpha on the stack
     
     for(char c:s)
         if(std::isalpha(c)){
             c = std::toupper(c);
             q.push(c);
             stk.push(c);
         }
         
         char c1{};
         char c2{};
         
         while(!q.empty()){
             c1 = q.front();
             q.pop();
             c2 = stk.top();
             stk.pop();
             if(c1 != c2){
                 return false;
             }
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