
// WRITE YOUR CODE HERE
#include "Complex.hpp"
// Code for constructor when given arguments
Complex::Complex(int r,int i){
  real_ = r;
  imag_ = i;
}

// Code for the overloaded *
Complex operator*(Complex const& c1, Complex const& c2){
  Complex new_c;
  new_c.real_ = (c1.real_ * c2.real_) - (c1.imag_ * c2.imag_);
  new_c.imag_ = (c1.real_ * c2.imag_) + (c1.imag_ * c2.real_);
  return new_c;
}