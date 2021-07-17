#include "Movies.h"
#include "Movie.h"
#include <vector>


bool Movies::add_movie(std::string name, std::string ratings, int watched){
    for(Movie &movie:v1){
        if(movie.get_name() == name)
            return false;
    }
    
        Movie m{name,ratings,watched};
        v1.push_back(m);
    
}

bool Movies::increment_watched(std::string name){
    for(Movie &movie:v1){
        if(movie.get_name()== name){
            movie.get_value();
        return true;
        }
            else{
                return false;
            }
            
    }
}

void Movies::display(){
    if(v1.size() == 0){
        cout << "==================================" <<endl;
        cout << "Empty" << endl;
    }
    else {
        for(auto movie:v1){
            movie.display();
        }
    }
}
