// WRITE YOUR CODE HERE
#ifndef fortnite
#define fortnite
#include <vector>
template <typename T>
std::vector<T> ArrayToVector( T * array, const int & size){
  std::vector<T> return_vec;
  for(T *p = array; p< (array+size);p++){
    return_vec.push_back(*p);
  }
  delete [] array;
  return return_vec;
}
#endif