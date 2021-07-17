#include "Movie.h"


Movie::Movie(string name,string ratings,int value)
    :name{name},ratings{ratings},value{value} {
        
    }
    
   void Movie:: display(){
        cout << name <<endl;
    }
    Movie::Movie(const Movie &source)
    :Movie{source.name,source.ratings,source.value}{
        
    }