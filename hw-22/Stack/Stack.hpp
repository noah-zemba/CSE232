// WRITE YOUR CODE HERE
#ifndef fortnite
#define fortnite
#include <stack>
using std::stack;
template <typename T>
stack<T> reverse_stack(stack<T> s){
  std::stack<T> s2;
  while(s.empty() != true){
    s2.push(s.top());
    s.pop();
  }
  return s2;
}
#endif