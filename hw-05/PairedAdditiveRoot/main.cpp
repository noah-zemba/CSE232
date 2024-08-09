#include <iostream>
#include <string>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std:: string;
using std::noskipws;
using std::setw;

int main() {
// WRITE YOUR CODE HERE
  int input;
  while(cin >> input){
		while(input >=100){
			int sum = 0;
			while(input >0){
				sum+=input%100;
				input/=100;
			}
		input = sum;
		}
		cout << input << endl;
	}
  return 0;
}