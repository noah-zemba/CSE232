// WRITE YOUR CODE HERE
#include "func.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <utility>
using std:: vector;
using std:: set;
using std::cin;
using std::cout;
using std::endl;
using std:: string;
using std::noskipws;
using std::istringstream;
using std:: ostringstream;
using std:: map;
using std:: pair;
using std:: cout;
using std:: endl;
#include <cassert>

set<string> ReplacementCensor(std::istream & input,std::ostream & output_text, const map<string,string> & word_map){
  string word;
  set<string> words_found;
  int count = 0;
  while(input >> word){
    bool found_key = false;
    if( count  != 0)
      output_text << " ";
    count = 1;
    // Check if word is the key to any of the pair in the map, repalce with the value
    string word_lower;
    // Make word of input stream all lowercase
    for(char ch: word){
      word_lower += tolower(ch);
    }
    for(auto [key,value] : word_map){
      // Make key all lowercase
      string key_lower;
      for(char ch: key){
        key_lower += tolower(ch);
      }
      // return index of where the key was found in the word
      
      size_t index;
      if(found_key == false)
        index = word_lower.find(key_lower);
      else{
        word_lower = "";
        for(char ch: word){
          word_lower += tolower(ch);
        }
        index = word_lower.find(key_lower);
      }
      // Check if the key is in the word/ is the word
      if(index != string::npos){
        found_key = true;
        // Length of key
        int len = key.length();
        // Add word to set of words found
        string word_found = word.substr(index, len);
        words_found.insert(word_found);
        // Erase the key from the word
        word.erase(index,len);
        // Insert the key
        word.insert(index,value);        
      }
    }
    output_text << word;
  }
  return words_found;
}

