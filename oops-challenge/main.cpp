#include <iostream>
#include "Movie.h"
#include "Movies.h"
using namespace std;
void increment_watched(Movies &movies,std::string name);
void add_movie(Movies &movies,std::string name, std::string ratings, int watched);


int main(){
    
    Movies my_movies;
    my_movies.display();
    
    
    
}