// WRITE YOUR CODE HERE
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

template<typename yer>
auto Increment(yer argument){
  return argument + 1;
}

template<typename yer>
auto AddToString(const string & ref, yer num){
  string temp = ref;
  string return_val = temp + std::to_string(num);
  return return_val;
}