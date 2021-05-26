#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    /*char vowels[] {'a','e','i','o','u'};
    cout << "\nThe first array element is : " << vowels[0] << endl;
    cout << "The last array element is : "<< vowels[4] << endl;
    
    
    vector <char> vowels {'a','e','i','o','u'};
    
    cout << "The first character is : "<< vowels.at(0)<<endl;*/
    
    /****************Exersice***************/
    
    vector <int> vector1 {};
    vector <int> vector2 {};
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "\nThe first element of vector1 is : " << vector1.at(0) << endl;
    cout << "The second element of vector 1  is : " << vector1.at(1) << endl;
    cout << "The size of the vector1 is : " << vector1.size() << endl;
    
    cout << "/************************************************************/"<< endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "The First element of vector2  is : "<< vector2.at(0)<<endl;
    cout << "The Second element of vector2 is : "<< vector2.at(0)<<endl;
    cout << "The size of the vector2 is : "<< vector2.size() << endl;
    
    vector <vector<int>> vector_2d{};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\n"<<vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << "\n" << vector_2d.at(1).at(0) <<"\t"<< vector_2d.at(1).at(1)<<endl;
    
    vector_2d.at(0).at(0) = 1000;
    
    cout << "\n"<<vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << "\n" << vector_2d.at(1).at(0) <<"\t"<< vector_2d.at(1).at(1)<<endl;
    
    cout << "\nThe Elements in vector1 are : "<< vector1.at(0)<<"\t"<< vector1.at(1)<<endl;
    
    
 
    
    
}