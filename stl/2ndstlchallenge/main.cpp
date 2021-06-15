//Challenge 2
//Lists
/* F - Play first Song
 * N - Play next Song
 * P  -Play previous Song
 * A- add and play a current song at a current location
 * L - list the current elements
 =========================================================
  * Enter a selection(Q to quit)
  * available playlist is modeled as a std::list<Song>
  * Following are the songs int the playlist.
  * i grabbed them from pop charts, you can use them or change them to nay song as you wish
  * 
  God's Plan              Drake                    5
   */


#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song()= default;
    Song(std::string name, std::string artist,int rating)
    :name{name},artist{artist},rating{rating} {}
    
    std::string get_name() const {
        return name;
    }
    
    std::string get_artist() const {
        return artist;
    }
    
    int get_rating(){
        return rating;
    }

    bool operator<(const Song &rhs)const{
        return this->name < rhs.name;
    }

    bool operator==(const Song &rhs)const {
        return this->name == rhs.name;
    }
    friend void play_current_song(const Song &song);   
};

std::ostream &operator<<(std::ostream &os,const Song &s){
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}
void display_menu(){
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next Song" << std::endl;
    std::cout << "P - Play Previous Song" << std::endl;
    std::cout << "A - Add and Play a new Song at current Location" <<std::endl;
    std::cout << "L- List The current Playlist" <<std::endl;
    std::cout << "=====================================================" << std::endl;
    std::cout << "Enter a selection (Q to quit):";
}

void play_current_song(const Song &song){
    std::cout << "Playing:" << std::endl;
    std::cout << std::setw(20) << std::left << song.name
       << std::setw(30) << std::left << song.artist
       << std::setw(2) << std::left << song.rating << std::endl;
    
    
}

void display_playlist(std::list<Song> &l, const Song &current_song){
    for(auto const &s:l){
        std::cout << s << std::endl;
    }
    play_current_song(current_song);
}


int main(){
    char t;
    std::string new_name,new_artist;
    int new_rating;
    std::list<Song> playlist{
        {"God's Plan",       "Drake",           5},
        {"Never Be the same",   "Camlia Cabello",   5},
        {"Pray For Me",    "The Weekend and K. Lamar",  4},
        {"The Middle",      "Zedd Maren Morris & grey",  5},
        {"Wait",           "Marroone 5",         4},
        {"Whatever it Takes", "Imagine Dragons",     3}
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    display_playlist(playlist, *current_song);
    display_menu();
    
    for(;;){
    
    std::cin >> t;
    
    switch(t) {
        case 'n':
        case 'N':
        current_song++;
        if(current_song == playlist.end()){
            current_song = playlist.begin();
        }
        display_playlist(playlist, *current_song);
        display_menu();
        break;
        
        case 'f':
        case 'F':
        current_song  = playlist.begin();
        display_playlist(playlist, *current_song);
        display_menu();
        break;
        
        case 'p':
        case 'P':
        
        if(current_song == playlist.begin()){
        
        current_song = playlist.end();
        current_song--;
        display_playlist(playlist, *current_song);
        display_menu();
        }
        else{
        current_song--;
        display_playlist(playlist, *current_song);
        display_menu();
        }
        break;
        
        case 'a':
        case 'A':
        
        std::cout << "Adding and playing a new song" <<std::endl;
        std::cout << "Enter the song name: ";
        std::cin >> new_name;
        std::cout << "Enter the song artist: ";
        std::cin >> new_artist;
        std::cout << "Enter your rating(1-5): ";
        std::cin >> new_rating;
        if(current_song != playlist.end()){
        playlist.emplace(current_song,new_name,new_artist,new_rating);
        current_song--;
        display_playlist(playlist, *current_song);
        display_menu();
        }
        break;
        
        case 'l':
        case 'L':
        
        display_playlist(playlist, *current_song);
        display_menu();
        break;
        
        default:
        break;
        
        
        }
        break;
        
       
        
        
        
    }
       
    }
    
    
    


