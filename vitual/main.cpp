#include <iostream>
#include <vector>
using namespace std;

class Shape { //abstract Base class
private:
    // attributes common to all shapes
public:
  virtual void draw() = 0;
  virtual void rotate() = 0;
  virtual ~Shape() {};  
};

class open_shape:public Shape{ // abstract class
public:
    virtual ~open_shape() {};
};

class closed_shape:public Shape{ //abstract class
public:
    virtual ~closed_shape(){};
};

class line:public open_shape{   //Concrete class
public:
    virtual void draw() override{
        cout << "Drawing a line" <<endl;
    }
    virtual void rotate() override {
        cout << "Rotating a line" <<endl;
    }
    virtual ~line(){};
};

class circle:public closed_shape {
public:
    virtual void draw() override{
        cout << "Drawing a circle" <<endl;
    }
    virtual void rotate() override{
        cout << "Rotating a circle" <<endl;
    }
    virtual ~circle(){};
};

class square:public closed_shape {
public:
    virtual void draw() override {
        cout << "Drawing a square" <<endl;
    }
    virtual void rotate() override {
        cout << "Rotating a square" <<endl;
    }
};

int main(){
//    Shape s;
//    Shape *p = new Shape(); cannot intianite abstratct classes

//       circle c;
//       c.draw();


        Shape*s1 = new circle();
        Shape*s2 = new line();
        Shape*s3 = new square();
        
        vector <Shape*> shapes {s1,s2,s3};
        for(const auto p:shapes){
            p->draw();
        }
 
       
       
       delete s1;
       delete s2;
       delete s3;
       
       return 0;
}