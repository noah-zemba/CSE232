// Note: This file is not tested by the autograder
#include "EveryOther.hpp"
#include <vector>
using std:: vector;
#include <initializer_list>
using std:: initializer_list;
#include <iostream>
#include <sstream>
using std::ostream;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
#include <cassert>
int main(){
  
  EveryOther<char> eo_1;
  EveryOther<std::string> eo_2 {"include", "don't", "keep", "leave"};
  std::cout << eo_1<< std::endl;
  std::ostringstream oss;
  std::cout << eo_2 << std::endl;
  oss << eo_2;
  assert(oss.str() == "EveryOther(include, keep, )");

}
