// WRITE YOUR CODE HERE
#ifndef fortnite
#define fortnite
template <typename T, size_t S, size_t S2>
void CopyStockPrices(const T(&ary1)[S],T(&ary2)[S2]){ 
  for(size_t i = 0; i<=S-1;++i){
    ary2[i] = ary1[i];
  }
}
#endif