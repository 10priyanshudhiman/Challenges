
#include <iostream>

using namespace std;

struct Student{
    int Roll_No;
    int M1, M2,M3;  // Marks of sub1 ,sub2 and sub3 respectively
    void get_roll ()
    {
       cout << "Enter the Roll No. of Student\n";
       cin >> this ->Roll_No;
    }
void get_mark()
    {
        cout << "Enter the marks obtained in Three Subjects respectively \n";
        cin >> this -> M1  >> this -> M2 >> this -> M3; 
    }
int Total_marks()
{
    int sum = 0;
    sum = M1 + M2 + M3;
    cout << "Total marks obtained is " << sum << "\n"; 
}
    
};


int main()
{
    Student s1, s2 ,s3;// Student 1, 2 and 3 respectively
    
    s1.get_roll();
    s1.get_mark();
    s1.Total_marks();
    
    s2.get_roll();
    s2.get_mark();
    s2.Total_marks();
    
    s3.get_roll();
    s3.get_mark();
    s3.Total_marks();

    return 0;
}
