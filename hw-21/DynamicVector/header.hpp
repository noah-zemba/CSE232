#pragma once

class DynamicVector {
 private:
  int * array_ = nullptr;
  int size_ = 0;
  int capacity_ = 0;
 public:
  DynamicVector(int * array, const int & size);
  DynamicVector(const DynamicVector & x);
  DynamicVector& operator=(DynamicVector x);
  ~DynamicVector();
  int & at(int index);
  void reserve(int capacity);
  int * data();
  int capacity();
  int size();
  void push_back(const int & x);
};

