// WRITE YOUR CODE HERE
#ifndef fortnite
#define fortnite
#include<string>
using std:: string;
#include<sstream>
using std::ostream;
class LispExpression{
  private:
    string code_;
  public:
    // Constructor
    LispExpression(string s):code_(s){};
    // Member
    string PrettyPrint();
    
    
};


#endif