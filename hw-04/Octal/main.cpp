// WRITE YOUR CODE HERE
#include <iostream>
#include <iomanip>
using std:: cin;
using std:: cout;
using std:: endl;

int main(){
  int number;
  while(cin >> number){
    cout << std::dec << number << endl;
    cout << std::hex << number << endl;
    cout << std::oct << number << endl;
  }
}