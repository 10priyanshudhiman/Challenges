#include <iostream>

#include <vector>

using namespace std;

int main(){
    
    vector <double> list{};
    char selection{};
    double number_to_added {};
    int smallest_number{1},largest_number{};
    float mean_of_numbers{0.0};
    for(int count =0;;count++){
         
        cout<< "\nP- Print numbers"<<endl;
        cout << "A-Add numbers" << endl;
        cout << "M-Display mean of the numbers" << endl;
        cout << "S-Display the smallest number" << endl;
        cout << "L-Display the largest number" << endl;
        cout << "Q-Quit" << endl;
        
        cout << "\nPlease Enter the command :";
        cin >> selection;
        
        switch(selection){
            case 'p':
            case 'P':
            if(list.size() == 0){
                cout << "[]- The given list is empty." << endl;
                break;
            }else{
                cout << "[";
                for(int i=0; i<list.size();i++){
                    cout << list[i]<<" ";
           }
           cout << "]"<< endl;
           
                }
                break;
                
            case 'a':
            case 'A':
           
            cout << "Enter the number which is to be added : ";
            cin >> number_to_added;
            list.push_back(number_to_added);
            cout << list[list.size()-1] << ": is added"<<endl;
            break;
            
            case 'm':
            case 'M':
            
            for(int j =0; j< list.size(); j++){
                mean_of_numbers += list.at(j);
            }
            mean_of_numbers = mean_of_numbers/list.size();
            cout << "The mean of the numbers is : " << mean_of_numbers << endl;
            break;
            
            case 's':
            case 'S':
            for(int i=0; i<list.size();i++){
                if(smallest_number >= list[i]){
                    smallest_number = list[i]; 
                }
            }
            cout << "The smallest number is : "<< smallest_number << endl;
            break;
            
            case 'l':
            case 'L':
            for(int i=0; i<list.size();i++){
                if(largest_number < list[i]){
                    largest_number = list[i]; 
                }
            }
            cout << "The largest number is : " << largest_number << endl;
            break;
            
            case 'q':
            case 'Q':
            cout << "Sorry!!! You quit the game !!!!"<<endl;
            break;
            
            default:
            cout << "Hey! Choose the right Option!!!"<<endl;
        }
        
        if(selection == 'q' || selection == 'Q'){
            break;
        }
    }
    
}