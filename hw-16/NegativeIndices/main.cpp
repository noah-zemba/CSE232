#include "header.hpp"
#include <cassert>

int main() {
  PythonicIntVector v;
v.push_back(8);
assert(v.at(0) == 8);
v.push_back(10);
assert(v.at(0) == 8);
assert(v.at(1) == 10);
v.at(0) = 100;
assert(v.at(0) == 100);
assert(v.at(1) == 10);

}