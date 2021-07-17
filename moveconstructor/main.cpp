#include <iostream>
using namespace std;

class Move{
private:
    int *data;
public:
    void set_data_value(int d){*data =d;}
    int get_data_value(){return *data;}
    
    //constructor 
    Move(int d);
    //copt cstr
    Move(const Move &source);
    
    //Move constructor
    // Move(Move &&source);
    //Destructor
    ~Move();
};


Move::Move(int d) {
    data =new int;
    *data = d;
    cout << "Constructor for d." << d << endl;
}

//copy ctr
Move:: Move(const Move &source)
   :Move{*source.data} {
       cout << "Copy constructor - deep copy." << *data << endl;
   }

//Move ctor
//Move::Move(Move &&source)
// :data {source.data} {
//    source.data = nullptr;
//    cout << "Move Constructor-Moving resource:" << endl;

Move::~Move(){
    if(data != nullptr){
        cout << "Destructor freeing data for :" << *data <<endl;
    } else {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

int main(){
    vector <Move> vec;
    
    vec.push_back(Move{10});
    
    
}