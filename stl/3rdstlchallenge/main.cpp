 /*
  * Challenge 3
  * std::set and std::map
  * Part 1

You are to display each unique word in the file and immediately following each word display
 * the number of times it occurs in the text file
 * the words should be display in ascending order
 * 
 * Part 2
 display each unique word in the file and immediately following each word 
  * display the line numbers in which that appears.
  * the words should be displayed in ascending order and the line number for each word should also be displayed in
  * ascending order.
  * if a word appears more than once a line then the line number should only appear once.
  */
  
  #include <iostream>
  #include <fstream>
  #include <map>
  #include <set>
  #include <iomanip>
  #include <sstream>
  #include <string>
  
 
  
  
  //Part1 process the file nad builds a map of words and the
  // number of times they occur in file
  
  //Display the word and the count from the
  // std::map<std::string, int>
  
  void display_words(const std::map<std::string, int> &words) {
      std::cout << std::setw(12) << std::left<< "\nWord"
                << std::setw(7) << std::right << "Count" << std::endl;
      std::cout << "========================================" << std::endl;
      
      for(auto pair:words)
          std::cout << std::setw(12) << std::left << pair.first
                    << std::setw(7) << std::right << pair.second << std::endl;
  }

void part1(){
    std::map<std::string,int> words;
    std::string line;
    std::string word;
    std::ifstream in_file {"../words.txt"};
   
    
    if(in_file){
//        char c;
        while(std::getline(in_file,line)){
//            int l = line.size();
//            
//            for(int i=0;i<l;i++){
//                c = line[i];
//               
//                if(line[i] == ' '){
//                    c = line[i+1];
//                    words.insert(std::pair<std::string,int>(word,1));
//                    word = " ";
//                        
//                }
//                else {
//                     word = word + c;
//                }
//               
//            }

             std::stringstream ss(line);
             while(ss >> word) {
                 word = clean_string(word);
                 words[word]++;  //increment count for the word in the map
             }
        
        }
        
        in_file.close();
        display_words(words);
    } else {
        std::cerr << "Error opening file" <<std::endl;
    }
}
  

int main(){
    
    part1();
    
    
}
  

