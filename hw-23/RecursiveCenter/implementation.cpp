#include "header.hpp"


int center(std::list<int>::const_iterator v1,std::list<int>::const_iterator v2){
  if (std::next(v1) == v2) {
    return *v1;
  }
  return center(std::next(v1), std::prev(v2));
}