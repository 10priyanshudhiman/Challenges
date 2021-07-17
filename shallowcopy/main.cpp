#include <iostream>
using namespace std;

class Shallow{
  private:
       int *data;
  public:
        void get_data(int d) {*data = d;}
        int print_data(){return *data;} 
        
        //Constructor
        Shallow(int d);
        //Copy Constructor
//        Shallow(const Shallow &source);
        //Destructor
        ~Shallow();
};

Shallow :: Shallow (int d){
    data = new int;
    *data = d;
}    

//Shallow :: Shallow(const Shallow &source)
//           :data{source.data}{
//       cout << "copy-constructor Shallow copy" << endl;       
//}

Shallow :: ~Shallow(){
    delete data;
    cout << "Destructor freeing data " << endl;
}

void display_shallow(Shallow s){
    cout << s.print_data() << endl;
}


int main(){
        Shallow obj1{100};
        display_shallow(obj1);
        
        Shallow obj2 {obj1};
        obj2.get_data(1000);
        return 0;
}