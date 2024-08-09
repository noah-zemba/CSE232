#include "Stack.hpp"

void Stack::push(char c) {
  Node* new_top = new Node(c);
  new_top->down = top_;
  top_ = new_top;
}
char Stack::top() { return top_->letter; }
void Stack::pop() {
  Node* new_top = top_->down;
  delete top_;
  top_ = new_top;
}

int Stack::size(){
  Node * current = top_;
  int counter = 1;
  if(current == nullptr)
    return 0;
  while(current->down != nullptr){
    counter++;
    current = current->down;
  }
  return counter;
}
// WRITE YOUR CODE HERE