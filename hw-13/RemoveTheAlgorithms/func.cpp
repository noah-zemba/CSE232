#include <string>
#include <vector>
#include <iterator>
#include <iostream>

int Func(int a) 
{
    std::vector<int> b(a);
    int val = 12;
    auto start = b.begin();
    while (start!=b.end()) {
      *start = val;
      ++start;
      ++val;
    }
    std::vector<int> c(b);
    std::vector<int> reversed_c(b);
    for(auto val:c)
      reversed_c.insert(reversed_c.begin(),val);
    int size = b.size();
    for(int i = 0;i < size;++i){
      b.at(i) = 2 * reversed_c.at(i) + b.at(i);
    }
    int num_twos = 0;
    for(auto ptr = b.begin() + 2; ptr != b.end() - 2; ++ptr){
      int int_val = *ptr;
      std::string value =  std::to_string(int_val);
      if(value.find('2') != std::string::npos)
        num_twos+=1;
    }
    return num_twos;
}
