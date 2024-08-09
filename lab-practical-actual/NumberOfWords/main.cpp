// WRITE YOUR CODE HERE
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using std::string;
using std:: cout;
using std:: cin;

int main(){
  string line;
  while(std::getline(cin,line)){
    std::istringstream stream(line);
    string word;
    int count = 0;
    while(stream >> word){
      count++;
    }
    cout << count << std::endl;
  }
}