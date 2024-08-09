#include "Stack.hpp"
#include <cassert>
int main() {
    Stack s;
    assert(s.size() == 0);
    s.push('a');
    assert(s.top() == 'a');
    assert(s.size() == 1);
    s.push('b');
    assert(s.top() == 'b');
    assert(s.size() == 2);
    s.pop();
    assert(s.top() == 'a');
    assert(s.size() == 1);
}