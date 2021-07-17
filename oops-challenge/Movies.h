#ifndef MOVIES_H
#define MOVIES_H
#include <vector>
#include "Movie.h"
class Movies
{
    vector <Movie> v1{};
public:
   void display();
   bool add_movie(std::string name, std::string ratings, int watched);
   bool increment_watched(std::string name);
    Movies();
    ~Movies();

};

#endif // MOVIES_H
