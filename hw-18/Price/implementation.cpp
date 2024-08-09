// WRITE YOUR CODE HERE
#include "header.hpp"
#include <iostream>
#include <iomanip>
#include <ios>
#include <sstream>
using std:: ostream;
using std:: istringstream;
using std::setprecision;
using std:: fixed;
ostream &operator<<(ostream &out, Price const &p) {
  out << "$" <<  setprecision(2) <<  fixed << p.price_;
  return out;
}

istream &operator>>(istream &in, Price &p) {
  std::string input;
  in >> input;
  std::string price = input.substr(1);
  p.price_ = std::stod(price);
  return in;
}

Price operator+(Price const &p1, Price const &p2) {
  Price final_p;
  final_p.price_ = p1.price_ + p2.price_;
  return final_p;
}

Price operator+=(Price &p1, Price const &p2) {
  p1.price_ = p1.price_ + p2.price_;
  return p1;
}

Price operator-(Price const &p1, Price const &p2) {
  Price final_p;
  final_p.price_ = p1.price_ - p2.price_;
  return final_p;
}

Price operator-=(Price &p1, Price const &p2) {
  p1.price_ = p1.price_ - p2.price_;
  return p1;
}