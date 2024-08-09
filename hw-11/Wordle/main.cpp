// WRITE YOUR CODE HERE
#include<iostream>
#include<string>
#include<iomanip>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main(){
  string input;
  int count = 0;
  string secret;
  while(count <7){
    string output = "";
    if(count == 0){
      cout << "Give me a secret word: " << endl;
      cin >> input;
      secret = input;
    }  
    else if(count < 7){
      cout << "Give me a guess: " << endl;
      if(cin >> input){
        if(input == secret){
        cout << secret << endl << "You Win!" << endl;
        break;
        }
        for(int i = 0; i < 5; i++){
          if(secret.at(i)==input.at(i)){
            output += secret.at(i);
          }
          else if(secret.find(input.at(i))!= std::string::npos){
            output += '?';
          }
          else{
            output += '.';
          }
        }
      }
      else{
        cout << "You Lose." << endl;
        break;
      }
      cout << output << endl;
      output = "";
    }
    if(count == 6){
      cout << "You Lose." << endl;
    }
    count++;
  }
  return 0;
}