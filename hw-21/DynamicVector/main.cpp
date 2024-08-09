// Note: This file is not tested by the autograder

#include "header.hpp"
#include <stdexcept>
using std::out_of_range ;
#include <cassert>
int main() {
	
  const int size = 3;
  int * array = new int [size] {1, 4, 7};
  DynamicVector dv(array, size);
  assert(dv.capacity() == 3);
  assert(dv.size() == 3);
  assert(dv.data() == array);
  dv.reserve(2);
  assert(dv.capacity() == 3);
  assert(dv.size() == 3);
  assert(dv.data() == array);
  bool exception_thrown = false;
  try {
    dv.at(3);
  } catch (std::out_of_range & e) {
    exception_thrown = true;
  }
  assert(exception_thrown);
  dv.reserve(7);
  assert(dv.capacity() == 7);
  assert(dv.size() == 3);
  int * new_array = dv.data();
  assert(new_array != array);
  dv.at(0) = -78;
  assert(new_array[0] == -78);
  exception_thrown = false;
  try {
    dv.at(3);
  } catch (std::out_of_range & e) {
    exception_thrown = true;
  }
  assert(exception_thrown);
  return 0;
}