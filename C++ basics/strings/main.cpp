#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main(){
    string alphabet {"abcdefghijklmnopqrstuwxyzABCDEFGHIJKLMNOPQRSTUWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlbgjhqdyvtkfuompciasr"};
    string decryptedMssg {};
    string encryptedMssg {};
    string myMssg {};
    int i,j;
    
    cout << "Enter the secret message : ";
    getline(cin, myMssg);
    
    for(i=0; i< myMssg.length(); i++){
        for(j=0; j< alphabet.length();j++){
            if(myMssg.at(i) == alphabet.at(j)){
                decryptedMssg.push_back(key.at(j));
                break;
            }
            }
            if( j == alphabet.length()){    
            decryptedMssg.push_back(myMssg.at(i));
            j = 0;
            }
            }
            
                cout << "---------------------------------------" << endl;
                cout << "The decrypted message is : " << decryptedMssg <<endl;
                
            
           for(i=0; i< myMssg.length(); i++){
        for(j=0; j< alphabet.length();j++){
            if(myMssg.at(i) == alphabet.at(j)){
                encryptedMssg.push_back(alphabet.at(j));
                break;
            }
            }
            if( j == alphabet.length()){    
            encryptedMssg.push_back(myMssg.at(i));
            j = 0;
            }
            }
              cout << "---------------------------------------" << endl;
             cout << "The encrypted message is :"  <<  encryptedMssg << endl;
                
            }
             
        /****************************************************************
        for(char c: mystring){
               use .find method 
              and use + operator to combine string objests
       
    
   
    
    
    
    
    

         }