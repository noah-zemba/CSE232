#include "header.hpp"
#include<vector>
#include<limits.h>
using std::vector;

vector<int>::const_iterator FindSmallestIndexRange(const vector<int> & v, const int & l_index, const int & u_index){
  int smallest_element = INT_MAX;
  vector<int>::const_iterator pointer_smallest_index;
  for(auto ptr = v.begin()+l_index; ptr != (v.begin()+u_index)-1; ++ptr){
    int value = *ptr;
    if(value < smallest_element){
      smallest_element = value;
      pointer_smallest_index = ptr;
    }
  }
  return pointer_smallest_index;
}

int main(){
  return 0;
}