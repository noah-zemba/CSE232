// WRITE YOUR CODE HERE
#ifndef fortnite
#define fortnite
#include <vector>
using std::vector;
#include <string>
using std:: string;
#include <sstream>
using std::ostringstream;
using std:: ostream;
class Counter{
  private:
    
    int count_=0;
    int original_num = count_;
  public:
    vector<string> log_;
    // Constructor
    Counter(int i):count_(i){
      ostringstream log_m;
      log_m << "Constructor called with a " << original_num;
      log_.push_back(log_m.str());};
    Counter(Counter &i):count_(i.count_),log_(i.log_){
      ostringstream log_m;
      log_m << "Copy Constructor called.";
      log_.push_back(log_m.str());};
    Counter():count_(0) {
      ostringstream log_m;
      log_m << "Default Constructor called.";
      log_.push_back(log_m.str());};
    // Member
    int Value();
    friend ostream &operator<<(ostream &, Counter &);
    friend Counter operator+(Counter const &, Counter const &);
    void operator=(const Counter &c){
      ostringstream log_m;
      count_= c.count_;
      log_ = c.log_;
      log_m << "= called.";
      log_.push_back(log_m.str());
    }
   
};


#endif