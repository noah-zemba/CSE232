// WRITE YOUR CODE HERE
#include "ForgetfulVector.hpp"
#include <vector>
using std:: vector;

int ForgetfulVector :: size(){
  int count = 0;
  for(auto elem: reallegitness){
    count+=1;
  }
  return count;

}

vector<int> ForgetfulVector :: push_back(int n){
  bool is_in_wector = false;
  // if n is in the wector more than once now then add it to reallegitness
  for(auto elem: wector){
    if(elem == n)
      is_in_wector = true;
  }
  if(is_in_wector == true)
    reallegitness.push_back(n);
  else
    wector.push_back(n);
  return reallegitness;

}

char ForgetfulVector :: at(int i){
  return reallegitness.at(i);
}