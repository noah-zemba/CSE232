// WRITE YOUR CODE HERE
#include<sstream>
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<stdexcept>
#include "name_checker.hpp"
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::noskipws;

vector<int> CountExceptions(const vector<string> &v){
  vector<int> errors(3);
  for(string title: v){
    try{CheckName(title);}
    catch(std::invalid_argument &){errors[0]+=1;}
    catch(std::length_error &){errors[1]+=1;}
    catch(std::out_of_range &){errors[2]+=1;}
  }
  return errors;
}