// WRITE YOUR CODE HERE
#include<sstream>
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<stdexcept>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::noskipws;
vector<double> ExtractDoubles(const string & str){
  vector<double> doubles;
  std::istringstream words_in(str);
  string word;
  while(words_in >> word){
    try{doubles.push_back(std::stod(word));}
    catch(std::invalid_argument &){continue;}
  }
  return doubles;
}
string ReturnPercentFormatted(const vector<double> & v){
  std::ostringstream output;
  for(double unformatted: v){
    output << std::fixed << std::setprecision(3) << unformatted * 100<< "%, " ;
  }
  return output.str();
}
int main(){
  string input = "";
  while(std::getline(cin,input)){
    vector<double> v = ExtractDoubles(input);
    string return_val = ReturnPercentFormatted(v);
    cout << return_val << endl;
  }
  return 0;
}