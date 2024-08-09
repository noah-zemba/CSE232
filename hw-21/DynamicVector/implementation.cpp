// WRITE YOUR CODE HERE
#include "header.hpp"
#include<algorithm>
#include <stdexcept>
using std::out_of_range ;

// Normal constructor when provided arguments
DynamicVector::DynamicVector(int * array, const int & size){
  size_ = size;
  capacity_ = size;
  array_ = array;
}
// Copy constructor
DynamicVector::DynamicVector(const DynamicVector & x){
  size_ = x.size_;
  capacity_ = x.capacity_;
  array_ = new int[x.size_];
  std::copy(x.array_, x.array_ + x.size_, array_);
}
// = operator
DynamicVector& DynamicVector::operator=(DynamicVector x) {
  if (this != &x) {  
    delete[] array_;
    size_ = x.size_;
    capacity_ = x.capacity_;
    array_ = new int[x.size_];
    std::copy(x.array_, x.array_ + x.size_, array_);
  }
  return *this;
}
// Destructor
DynamicVector::~DynamicVector(){{ delete[] array_; }}

int & DynamicVector::at(int index){
  int count = 0;
  if(index <= size_-1){
    for(int *p = array_; p<(array_+capacity_);p++){
      if(count == index)
        return array_[count];
      count+=1;
    }
  }
  throw out_of_range ("poop sock");
}
// Grow
void DynamicVector::reserve(int capacity){
  if(capacity > capacity_){
    capacity_ = capacity;
    int * new_ary = new int[capacity_]{};
    std::copy(array_, array_ + size_, new_ary);
    std::swap(new_ary,array_);
    delete [] new_ary;
  }
}
// Return address of array
int * DynamicVector::data(){
  return array_;
}
// What is capacity
int DynamicVector::capacity(){
  int count = 0;
  for(int *p = array_; p<(array_+capacity_);p++){
    count+=1;
  }
  return count;
}
// What is size
int DynamicVector::size(){
  int count = 0;
  for(int *p = array_; p<(array_+size_);p++){
    count+=1;
  }
  return count;
}
// Push_back ts
void DynamicVector::push_back(const int & x){
  reserve(size_+1);
  size_++;
  array_[size_-1] = x;
}