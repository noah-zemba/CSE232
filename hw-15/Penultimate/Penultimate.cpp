// WRITE YOUR CODE HERE
#include "Penultimate.hpp"
#include <string>
using std::string;
string Penultimate :: push_back(string str){
  string temp = init;
  init = str;
  return temp;

}