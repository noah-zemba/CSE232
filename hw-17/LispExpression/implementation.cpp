// WRITE YOUR CODE HERE
#include "header.hpp"
#include<string>
using std::string;
#include<sstream>
using std:: ostringstream;
using std:: istringstream;
#include<iostream>
using std::cout;

string LispExpression:: PrettyPrint(){
  
  ostringstream out;
  istringstream in (code_);
  string word_or_token;
  int difference = 0;
  int count = 0;
  int loop_c = 0;
  int count_o = 1, count_c = 0;
  while(in >> word_or_token){
    if(count_o == count_c && count_o > 0)
      break;
    if(loop_c != 0){
      if(word_or_token == "("){
        difference++;
        count_o++;
      }
      out << "\n";
      while(count < difference){
        out << " ";
        count++;
      }
      if(word_or_token == ")"){
        difference--;
        count_c++;
      }
    }
    loop_c++;
    count = 0;
    if(word_or_token != "(" and word_or_token != ")")
      out << " ";
    out << word_or_token;
  }
  out << "\n";
  return out.str();
}