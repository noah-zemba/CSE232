
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>

int main() {
  std::string line;
  while (std::getline(std::cin, line)) {
    std::istringstream iss(line);
    std::vector<std::string> words;
    std::copy(std::istream_iterator<std::string>(iss), 
      std::istream_iterator<std::string>(), std::back_inserter(words));
    std::sort(words.begin(), words.end());
    std::copy(words.begin(), words.end(), 
      std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << std::endl;
  }
  return 0;
}
