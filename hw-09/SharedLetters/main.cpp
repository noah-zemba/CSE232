// WRITE YOUR CODE HERE
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
string SharedLetters(const string & w1,const string w2,const string * w3){
  vector<int> lengths;
  vector<string> strings;
  string first_word = w1;
  string second_word = w2;
  string third_word = *w3;
  lengths.push_back(first_word.size());
  strings.push_back(first_word);
  lengths.push_back(second_word.size());
  strings.push_back(second_word);
  lengths.push_back(third_word.size());
  strings.push_back(third_word);
  int longest_length = 0;
  // Find longest length
  for(auto length: lengths){
    if(length>longest_length){
      longest_length = length;
    }
  }
  // Make all words as long as the longest word to 
  // avoid out of range errors when checking for same letters
  int count= 0;
  for(auto word: strings){
    int length_word = word.size();
    while( length_word < longest_length){
      word.push_back('-');
      length_word = word.size();
    }
    if(count == 0)
      first_word = word;
    if(count == 1)
      second_word = word;
    if(count==2)
      third_word = word;
    count++;
    
  }
  string output_string = "";
  int num_same_letters = 0;
  //cout << first_word << endl;
  //cout << second_word << endl;
  //cout <<third_word << endl;
  for(int i=0;i<longest_length;i++){
    if(first_word.at(i)==second_word.at(i) && first_word.at(i) != '-' && second_word.at(i) != '-')
      num_same_letters+=1;
    if(first_word.at(i)==third_word.at(i) && first_word.at(i) != '-' && third_word.at(i) != '-')
      num_same_letters+=1;
    if(second_word.at(i) ==third_word.at(i) && second_word.at(i) != '-' && third_word.at(i) != '-')
      num_same_letters+=1;
    string count = std::to_string(num_same_letters);
    output_string += count + ",";
    num_same_letters = 0;
  }
  //output_string.erase(output_string.size() -1);
  return output_string;
}
int main(){
  string w1,w2,w3;
  cin >> w1 >> w2 >> w3;
  string * pointer = &w3;
  string result = SharedLetters(w1,w2,pointer);
  cout << result;
}