// WRITE YOUR CODE HERE
#include "header.hpp"
#include <sstream>
using std::ostringstream;
using std::istream;
int Counter:: Value(){
  int temp = count_;
  count_ -= 1;
  ostringstream log_m;
  log_m << "Value called. Returned a " << temp;
  log_.push_back(log_m.str());
  return temp;
}

ostream &operator<<(ostream &out, Counter &c) {
  ostringstream log_m;
  log_m << "<< called." ;
  c.log_.push_back(log_m.str());
  int count = c.count_;
  Counter c2(count);
  out << "Counter("<<  c.original_num <<  ")@" << c2.Value();
  return out;
}

Counter operator+(Counter const &c1, Counter const &c2) {
  ostringstream log_m;
  log_m << "+ called." ;
  int init_val = c1.original_num + c2.original_num;
  Counter final_c(init_val);
  final_c.count_ = c1.count_ + c2.count_;
  final_c.log_.push_back(log_m.str());
  return final_c;
}