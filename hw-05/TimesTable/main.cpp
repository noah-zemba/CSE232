// WRITE YOUR CODE HERE
#include <iostream>
#include <iomanip>
using std:: cin;
using std:: cout;
using std:: endl;
int main(){
  // Need a for loop that goes from first input to second input
  // this represents range of rows


  // Need a for loop that goes from the third input to the fourth
  // this will create the columns
  int row_start;
  int row_end;
  int col_start;
  int col_end;
 
  cin >> col_start >> col_end;
  cin >> row_start >> row_end;
  int count = 0;
  for(int i = row_start; i<= row_end; i++){
    for(int i = col_start; i<= col_end; i++){  
      int product = row_start*(col_start +count);
      if(i != col_end)
        cout << row_start<< "*" << col_start +count << "=" << product << ", ";
      else
        cout << row_start<< "*" << col_start+count << "=" << product << endl;
      count+=1;
    }
    ++row_start;
    count = 0;
  }
  return 0;
}
