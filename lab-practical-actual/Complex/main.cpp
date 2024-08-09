#include "Complex.hpp"
#include <iostream>
#include <cassert>

int main() {
  Complex c(4, 5);
  assert(c.real() == 4);
  assert(c.imaginary() == 5);
  std::cout << c << std::endl; // Should print "4+5i"
  Complex c2(7, 9);
  Complex c3 = c * c2;
  std::cout << c3 << std::endl; // Should print "-17+71i"
}
