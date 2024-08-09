#ifndef fortnite
#define fortnite
#include <vector>
#include <array>
#include <string>
#include <algorithm>
#include <iterator>
template<typename T>
T * VectorToArray(std::vector<T> const & v){
  T * arry = new T[v.size()];
  std::copy(v.begin(),v.end(),arry);
  return arry;
}
#endif 