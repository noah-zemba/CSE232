// WRITE YOUR CODE HERE
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
double Centrifuge(int & time, int & ore, double * U238){
  double U235;
  int * num_ore = &ore;
  int * amount_time = &time;
  while(*num_ore>=10 && *amount_time >=12){
    *num_ore-=10;
    *amount_time-=12;
    *U238+=.993;
    U235 += .007;
  }
  return U235;
}
