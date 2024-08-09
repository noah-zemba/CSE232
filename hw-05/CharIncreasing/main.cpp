// WRITE YOUR CODE HERE

// if ascii value current num > previous num
// add "char" to the output string

// else
// add "_" to the output string

#include <iostream>
#include <string>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std:: string;
using std::noskipws;
using std::setw;

int main(){
  string output = "";
  string input = "";
  while(std::getline(cin,input)){
    int length = input.length();
    for(int i=0;i<length; i++){
    
      if(i!=0){
        char current_letter = input.at(i);
        char previous_letter = input.at(i-1);
        if(current_letter>previous_letter)
          output += current_letter;
        
        else
          output += "_";
      }

      else
        output += input.at(i);
      
      if(i==length-1)
        output += '\n';
    }  
  }
  cout << output;
  return 0;
}