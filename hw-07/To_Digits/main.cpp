// WRITE YOUR CODE HERE
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std:: string;
using std::noskipws;
using std::istringstream;
using std::setw;
/*
void To_Digits(std::string &input){
  string * pointer_to_input = &input;
  string adjusted_input;
  string conents_of_input = *pointer_to_input;
  
  *pointer_to_input = conents_of_input;
}
*/




void To_Digits(std::string &input){
  //string input = string&;
  string * pointer_to_input = &input;
  string adjusted_input;
  istringstream words_in(*pointer_to_input);
  string word;
  while(words_in){
    words_in >> word;
    if(words_in){
      string word_lower;
      for(char ch: word){
        word_lower += tolower(ch);
      }

      size_t found_zero = word_lower.find("zero");
      size_t found_one = word_lower.find("one");
      size_t found_two = word_lower.find("two");
      size_t found_three = word_lower.find("three");
      size_t found_four = word_lower.find("four");
      size_t found_five = word_lower.find("five");
      size_t found_six = word_lower.find("six");
      size_t found_seven = word_lower.find("seven");
      size_t found_eight = word_lower.find("eight");
      size_t found_nine = word_lower.find("nine");
      bool found_a_num = false;
      
      if (found_zero != string::npos){
        size_t found_zero = word_lower.find("zero");
        word_lower.replace(found_zero,4,"0");
        found_a_num = true;
      }
      if (found_one != string::npos){
        size_t found_one = word_lower.find("one");
        word_lower.replace(found_one,3,"1");
        found_a_num = true;
      }
      if (found_two != string::npos){
        size_t found_two = word_lower.find("two");
        word_lower.replace(found_two,3,"2");
        found_a_num = true;
      }
      
      if (found_three != string::npos){
        size_t found_three = word_lower.find("three");
        word_lower.replace(found_three,5,"3");
        found_a_num = true;
      }
      
      if (found_four != string::npos){
        size_t found_four = word_lower.find("four");
        word_lower.replace(found_four,4,"4");
        found_a_num = true;
      }
      
      if (found_five != string::npos){
        size_t found_five = word_lower.find("five");
        word_lower.replace(found_five,5,"5");
        found_a_num = true;
      }
      
      if (found_six != string::npos){
        size_t found_six = word_lower.find("six");
        word_lower.replace(found_six,3,"6");
        found_a_num = true;
      }
      
      if (found_seven != string::npos){
        size_t found_seven = word_lower.find("seven");
        word_lower.replace(found_seven,5,"7");
        
        found_a_num = true;
      }
      
      if (found_eight != string::npos){
        size_t found_eight = word_lower.find("eight");
        word_lower.replace(found_eight,5,"8");
        found_a_num = true;
      }
      
      if (found_nine != string::npos){
        size_t found_nine = word_lower.find("nine");
        word_lower.replace(found_nine,4,"9");
        found_a_num = true;
      }
      if(found_a_num == true)
        adjusted_input+=word_lower + " ";

      if(found_a_num == false){
        adjusted_input+=word + " ";
      }
      
    }
    else
      adjusted_input.pop_back();
  }
  *pointer_to_input = adjusted_input;
}

int main(){
  std::string input{"one TWO Zero not a number tenfourseven!!! fourteen"};
  To_Digits(input);
  cout << input;
}
