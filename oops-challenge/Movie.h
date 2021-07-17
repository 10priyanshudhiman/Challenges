#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>

#include <string>
using namespace std;

class Movie
{
    string name;
    string ratings;
    int value;
public:
    string get_name(){return name;}
    void get_value(){value++;}
    Movie(string name,string ratings,int value);
    void display();
          
    Movie(const Movie &source);  

    Movie();
    
    ~Movie();

};

#endif // MOVIE_H
