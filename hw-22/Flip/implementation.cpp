// WRITE YOUR CODE HERE
#include "Node.hpp"
#include "header.hpp"
#include <iostream>
void Flip(Node * n){
  Node * dummy = n;
  while(dummy!= nullptr){
    std::cout << "HI";
    bool tf = (*dummy).on;
    (*dummy).on = !tf;
    dummy = (*dummy).next;
  }
}
