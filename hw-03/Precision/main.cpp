// WRITE YOUR CODE HERE
#include <iostream>
#include <iomanip>
using std:: cin;
using std:: cout;
using std:: endl;
using std:: setprecision;


int main(){
  double number;
  cin >> number;
  cout << std::fixed << setprecision(2)<< number << endl;
  cout << std::fixed << setprecision(4)<< number << endl;
  cout << std::fixed << setprecision(6)<< number << endl;
  cout << std::scientific << setprecision(2)<< number << endl;
  cout << std::scientific << setprecision(4)<< number << endl;
  cout << std::scientific << setprecision(6)<< number << endl;
}
