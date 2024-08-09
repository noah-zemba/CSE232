#include "header.hpp"

void Stack::push(char c) {
    Node* new_top = new Node(c);
    new_top->down = top_;
    top_ = new_top;
}

char Stack::top() { 
    return top_->letter; 
}

void Stack::pop() {
    Node* new_top = top_->down;
    delete top_;
    top_ = new_top;
}

bool Stack::isEmpty() {
  if (top_ == nullptr) {
    return true;
  }
  return false;
}

Stack::~Stack(){
  Node* current = top_;
  Node* next;

  while (current != nullptr) {
    next = current->down;
    delete current;
    current = next;
  }
}

std::ostream& operator<<(std::ostream& os, Stack const& s){
  Node* current = s.top_;
  Node* next;

  while (current != nullptr) {
    next = current->down;
    os << current->letter << ",";
    current = next;
  }
  return os;
}

Stack::Stack(Stack const& s){
    // Use an another stack to maintain order during copying
    Stack s1;

    // Copy elements from other stack
    Node* current = s.top_;
    while (current != nullptr) {
        s1.push(current->letter);
        current = current->down;
    }

    // Copy elements back to the current stack to maintain order
    while (!s1.isEmpty()) {
        push(s1.top_->letter);
        s1.pop();
    }
}

void Stack::clear(){
  while(!isEmpty()){
    pop();
  }
}

Stack& Stack::operator=(Stack other){
  std::swap(top_,other.top_);
  return *this;
}