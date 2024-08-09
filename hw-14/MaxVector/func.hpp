// WRITE YOUR CODE HERE
#ifndef nba2k24_myCareer
#define nba2k24_myCareer
#include <vector>
#include <string>
#include <stdexcept>
#include <iostream>
using std:: string;
using std:: vector;

template<typename T>
vector<T> MaxVector(const vector<T> & v1,const vector<T> & v2 ){
  int len_v1 = v1.size();
  int len_v2 = v2.size();
  vector<T> v1c = v1;
  vector<T> v2c = v2;
  if(len_v1 < len_v2){
    v1c.resize(len_v2);
    std::copy(v2c.begin() + len_v1, v2c.end(), v1c.begin() + len_v1);
    std:: cout << v1c.size() << v2c.size() << std::endl;
    int max_size = v2c.size();
    vector<T> output(max_size);
    std::transform(v1c.begin(), v1c.end(), v2c.begin(),
    output.begin(),[](const T& a, const T& b) {return std::max(a, b);});
    return output;
  }
  else if(len_v1 > len_v2){
    v2c.resize(len_v1);
    std::copy(v1c.begin() + len_v2, v1c.end(), v2c.begin() + len_v2);
    std:: cout << v1c.size() << v2c.size() << std::endl;
    int max_size = v2c.size();
    vector<T> output(max_size);
    std::transform(v1c.begin(), v1c.end(), v2c.begin(),
    output.begin(),[](const T& a, const T& b) {return std::max(a, b);});
    return output;
  }
  else{
    vector<T> output(len_v1);
    std::transform(v1.begin(), v1.end(), v2.begin(),
    output.begin(),[](const T& a, const T& b) {return std::max(a, b);});
    return output;
  }
      
  
}

#endif
