// WRITE YOUR CODE HERE
#include "header.hpp"
#include <vector>
using std:: vector;

void PythonicIntVector :: push_back(int n){
  wector.push_back(n);
}

int & PythonicIntVector :: at(int i){
  if(i < 0){
    int size = wector.size();
    int & return_val = wector.at(size + i);
    return return_val;
  }
  int & return_val2 = wector.at(i);
  return return_val2;
}