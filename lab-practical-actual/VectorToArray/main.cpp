#include <iostream>
#include <cassert>
#include <vector>
#include <string>
#include "header.hpp"

int main() {
  std::vector<int> const vec_ints = {1, 5, -3, 7};
  int * array_ints = VectorToArray(vec_ints);
  for (int i = 0; i < 4; ++i) {
    assert(array_ints[i] == vec_ints[i]);
  }

  std::vector<std::string> const vec_strings = {"CSE", "232", "c++", "array", "vector"};
  std::string * array_strings = VectorToArray(vec_strings);
  for (int i = 0; i < 5; ++i) {
    assert(array_strings[i] == vec_strings[i]);
  }
  std::cout << "Done" << std::endl;
}  