#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector <int> v);
void add_vector( vector <int> &v);
void mean_numbers(vector <int> &v);
void smallest_number(vector <int> v);

int main(){
   vector <int> elements{};
   char command; 
    for(int i=0;;i++){
        for(int j=0;;j++){
            
            cout << "P : Print numbers" << endl;
            cout << "A : Add a number" << endl;
            cout << "M : Display mean of the numbers" <<endl;
            cout << "S : Display the smallest numbers" <<endl;
            cout << "L : Display the largest numbers" <<endl;
            
            cout << "Enter the command : "<<endl;
            cin >> command;
            switch(command){
                case 'p':
                case 'P':
                print_vector(elements);
                break;
                
                case 'a':
                case 'A':
                add_vector(elements);
                break;
                
                case 'm':
                case 'M':
                mean_numbers(elements);
                break;
                
                case 's':
                case 'S':
                smallest_number(elements);
//              smallest_number(elements);
                break;
            }
        }
    }
    
}

void print_vector(const vector <int> v){
    if(v.size() == 0 ){
        cout << "{" << "}" <<endl;
    }
    else if(v.size() != 0){
        for(int i=0;i<v.size();i++){
            cout << v.at(i)<< " " << endl;
        }
    }
}

void add_vector( vector <int> &v){
    int myNumber;
    cout << "Enter the number which is to added : "<<endl;
    cin >> myNumber;
    
    v.push_back(myNumber);
}

void mean_numbers(vector <int> &v){
    int sum{0},count;
     for(int i=0;i<v.size();i++){
            
            count = v.at(i);
            sum += v.at(i);
        }
        cout << "Mean of the numbers is " << (double)sum/v.size()<< endl;
}
 void smallest_number(vector <int> v){
     int count;
     count =  v.at(0);
//     for(int i=0;i<v.size();i++){
//            if(count >= v.at(i+1)){
//                count = v.at(i+1);
//                cout << count;
//            }
//           
//        }
//        cout << count;
//        return count;
        for(auto num:v){
            if(num >= v.at())
        }  

 }     
