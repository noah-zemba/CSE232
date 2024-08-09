// WRITE YOUR CODE HERE
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using std:: vector;
using std::cin;
using std::cout;
using std::endl;
using std:: string;
using std::noskipws;
using std::setw;

int main(){
  vector<string> list_long_words;
  string output = "";
  string input = "";
  string word = "";
  while(std::getline(cin,input)){
    input += " ";
    int length = input.length();
    for(int i=0;i<length; i++){
      char letter = input.at(i);
      if(letter != ' '){
        word += input.at(i);
      }
      else{
        if(word.length() >=5){
          list_long_words.push_back(word);
        }
        word = "";
      }
    }  
  }
  for(string long_word: list_long_words)
      output += long_word + " ";
  cout << output;
  return 0;
}