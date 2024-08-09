#include <iostream>
#include <string>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std:: string;
//using std::noskipws;
using std::setw;

int main(){
  string input;
  string output;
  while(std::getline(cin,input)){
    int length = input.length();
    if(length>0){
      if(isalpha(input.at(0)))
        output+=input.at(0);
      for(int i= 0; i < length-1; i++){
        char ch = input.at(i);
        if(!isalpha(ch) && isalpha(input.at(i+1))!=0){
          output+= input.at(i+1);  
        }
      }
    }
  }
  cout << output;
}
