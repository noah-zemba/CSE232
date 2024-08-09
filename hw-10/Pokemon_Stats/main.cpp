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

int main(){
  string names_input;
  string stat_input;
  std::getline(cin,names_input);
  std::getline(cin,stat_input);
  std::stringstream iss;
  iss << names_input << stat_input;
  string inputs = iss.str();  
  string word_in_input;
  vector<string> headers;
  vector<string> names;
  vector<int> stat;
  int len = inputs.length();
  for(int i = 0; i<len; i++){
      if(inputs.at(i) != ':' && inputs.at(i) != ',')
        word_in_input+= inputs.at(i);
    
      else{
        if(inputs.at(i)==':')
          headers.push_back(word_in_input);
        
        else if(inputs.at(i)==','){
          try{
            int num_stat = stoi(word_in_input);
      
            stat.push_back(num_stat);
          }

          catch(std::invalid_argument const&){
            names.push_back(word_in_input);
          }
        }
      word_in_input = "";
      }
  }
  for(auto header: headers){
    cout << header << ",";
  }
  int count = 0;
  int max_stat = 0;
  string max_stat_name = "";
  int size = names.size();
  while(count < size){
    cout << endl << names[count] << "," << stat[count] << ",";
    if(stat[count] > max_stat){
      max_stat = stat[count];
      max_stat_name = names[count];
    }
    count++;
  }
  cout << endl;
  cout << endl;
  cout << "Max:" << endl;
  cout<< max_stat_name << "," << max_stat << ",";
  return 0;
}