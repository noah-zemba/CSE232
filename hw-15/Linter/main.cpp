#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
using std:: vector;
using std::cin;
using std::cout;
using std::endl;
using std:: string;
#include <cassert>
// WRITE YOUR CODE HERE


bool myLinter(std::istream &file) {
// WRITE YOUR CODE HERE
  string line;
  bool valid_vode = true;
  // Counters for parenthesis open, parenthesis closed, etc.
  int count_po = 0;
  int count_pc = 0;
  int count_bo = 0;
  int count_bc = 0;
  // Wector with end line characters
  vector<char> endl_chars = {'(', ')', ';', '{', '}'};
  //Get every line 
  while(getline(file, line)){
    /// if line length > 0 (since empty lines are OK)
    if(line.length()>0){
      //make sure first letter is a S 
      for(auto ch:line){
        // If the first letter on a line isn't S return False
        if(isalpha(ch)){
          if(ch != 'S')
            return false;
          else{
            valid_vode = true;
            break;
          }
        }
        else if(ch != ' '){
          return false;
        }
        
        // If the first letter on a line is S keep valid_code true and continue
        
        
      }
      //make sure last letter is ; () {}
      for(auto ch : endl_chars){
        if(line.at(line.size()-1) != ch){
          valid_vode = false;
        }
        // If the last letter is one of the end line chars then the code is valid and stop checking
        // (if you keep checking you may get a false negative)
        else{
          valid_vode = true;
          break;
        }
      }
      if(valid_vode == false)
        return false;
      // Count # of (, ), {, and } to make sure there are an equal amout of { and }, and ( and 
      for(auto ch: line){
        if(ch == '(')
          count_po+=1;
        if(ch == ')')
          count_pc+=1;
        if(ch == '{')
          count_bo+=1;
        if(ch == '}')
          count_bc+=1;
      }
    }
  }
  // Make sure all parenthesis and brackets are closed
  if(count_bo != count_bc)
    valid_vode = false;
  if(count_po != count_pc)
    valid_vode = false;
// cout << count_po << " " << count_pc << " " << count_bo << " " << count_bc << endl;
  return valid_vode;
}

int main(){

std::istringstream input_zero_one("Stest\n\
STest2;");
//assert(!myLinter(input_zero_one));
}
