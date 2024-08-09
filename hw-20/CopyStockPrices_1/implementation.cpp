// WRITE YOUR CODE HERE
#include "header.hpp"
void CopyStockPrices(double * ary1,double * ary2){
  int count = 0;
  for(int i = 0; ary1[i]>=0;i++){
    count++;
    ary2[i] = ary1[i];
    if(ary1[i] < 0){
      break;
    }
  }
  ary2[count] = ary1[count];
}