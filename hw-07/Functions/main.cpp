// WRITE YOUR CODE HERE
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int Triple(int num){
  return num*3;
}

int Closest_Multiple_Of_13(int num){
  if(num < 7 and num >=0)
    return 0;
  else if(num >=7 and num <13)
    return 13;

  if(num > -7 and num < 0)
    return 0;
  else if(num <= -7 and num >=-13)
    return -13;

  if(num > 0){
    int distance_from_multiple_1 = num%13;
    int distance_from_multiple_2 = 13-distance_from_multiple_1;
    if(distance_from_multiple_1 > distance_from_multiple_2)
      return num+distance_from_multiple_2;
    else
      return num-distance_from_multiple_1;
  }
  else{
    int distance_from_multiple_1 = -(num%13);
    int distance_from_multiple_2 = -(13-distance_from_multiple_1);

    if(abs(distance_from_multiple_1) > abs(distance_from_multiple_2)){
      distance_from_multiple_1 = -distance_from_multiple_1;
      distance_from_multiple_2 = -distance_from_multiple_2;
    }

    if(distance_from_multiple_1 < distance_from_multiple_2)
      return num-distance_from_multiple_2;
    else
      return num+distance_from_multiple_1;
  }
}

int main(){
  int input;
  cin >> input;
  cout << input * 2;
  cout << endl;
  return 0;
}