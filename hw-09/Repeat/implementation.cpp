// WRITE YOUR CODE HERE
#include "header.hpp"
#include<string>
using std::string;
int Repeat(int var){
  return var * 2;
}

string Repeat(char var){
  string reeturn = string() + var + var;
  return reeturn;
}

string Repeat(string var){
  string double_string = var + " " + var;
  return double_string;
}