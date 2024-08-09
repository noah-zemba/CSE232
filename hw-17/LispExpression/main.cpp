#include <iostream>
#include "header.hpp"
#include "implementation.cpp"
#include <cassert>
#include<sstream>
int main() {
	LispExpression le("(   ( ) q  ( a ( b ) )  )");
std::string result = le.PrettyPrint();
std::string expected = std::string(R"raw((
 (
 )
 q
 (
  a
  (
   b
  )
 )
)
)raw");
  std:: cout << result << std:: endl;
  std:: cout << std:: endl;
  std:: cout << std:: endl;
  std:: cout << std:: endl;
  std:: cout << expected << std:: endl;
  // note that the expected string is the same as "(\n one\n two\n (\n three\n )\n)\n"
  // just written using C++'s raw string literal syntax.
}