// WRITE YOUR CODE HERE#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <numeric>
using std::string;
using std::vector;

void SortByUppercase(vector<string>&words){
  std::stable_sort(words.begin(), words.end(), [](const string& a, const string& b) {
        string caseA, caseB;
        std::copy_if(a.begin(), a.end(), std::back_inserter(caseA), ::isupper);
        std::copy_if(b.begin(), b.end(), std::back_inserter(caseB), ::isupper);
        return caseA < caseB;
    });
}

int SumOfOdd(vector<int>::const_iterator start, vector<int>::const_iterator end){
  return std::accumulate(start,end,0,[](int sum, int element){return sum + (element%2==1?element:0);});
}

int main(){}