// Note: This file is not tested by the autograder
#include "implementation.cpp"
#include "header.hpp"
#include "Node.hpp"
#include <iostream>
int main() {
	
  Node * n1 = new Node;
  Node * n2 = new Node;
  (*n1).next = n2;
  std::cout << (*n1).on << std::endl;
  Flip(n1);
  std::cout << (*n1).on << std::endl;
  std::cout << (*n2).on << std::endl;

  return 0;
}