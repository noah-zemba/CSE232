// WRITE YOUR CODE HERE
#ifndef fortnite
#define fortnite
#include <vector>
using std:: vector;
#include <initializer_list>
using std:: initializer_list;
#include <iostream>
#include <sstream>
using std::ostream;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;

template <typename T>
class EveryOther{
  private:
    int element_count = 0;
    vector<T> wector_;
  public:
    EveryOther() = default;
    EveryOther(initializer_list<T> input){
      for(auto elem: input){
        if(element_count%2 == 0){
          wector_.push_back(elem);
        }
        element_count++;
        
      }
    };
    
    int size(){
      int count = 0;
      for(auto elem: wector_){
        count+=1;
      }
      return count;
    }

    friend ostream &operator<<(ostream &out, EveryOther<T> const &v) {
      out << "EveryOther(";
      copy(v.wector_.begin(), v.wector_.end(), ostream_iterator<T>(out, ", "));
      out << ")";
      return out;
    }

    void push_back(T elem){
      if(element_count % 2 == 0){
        wector_.push_back(elem);
      }
      element_count++;
    }
  
};



#endif