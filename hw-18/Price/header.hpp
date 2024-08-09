// WRITE YOUR CODE HERE
#ifndef fortnite
#define fortnite
#include<string>
using std:: string;
#include<sstream>
using std::ostream;
using std::istream;
class Price{
  private:
    double price_;
  public:
    // Constructor
    Price(double p):price_(p){};
    Price()=default;
    // Member
    friend ostream &operator<<(ostream &, Price const &);
    friend istream &operator>>(istream &, Price &);
    friend Price operator+(Price const &, Price const &);
    friend Price operator+=(Price &, Price const &);
    friend Price operator-(Price const &, Price const &);
    friend Price operator-=(Price &, Price const &);
    
    
};


#endif