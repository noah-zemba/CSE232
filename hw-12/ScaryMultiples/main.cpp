#include<vector>
#include<string>
#include<stdexcept>
#include<sstream>
using std::string;
using std::vector;
int SumButScared(const string & str){
  std::istringstream words_in(str);
  string word;
  int sum = 0;
  while(words_in >> word){
    int num = stoi(word);
    if(num % 13 == 0)
      throw std::invalid_argument("i'm peeing my pants terrified");
    else
      sum+=num;
  }
  return sum;
}