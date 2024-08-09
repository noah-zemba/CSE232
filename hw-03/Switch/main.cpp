// Example 3.6
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::noskipws;
using std::setw;

int main() {
  char C;               // Input character
  int char_count = 0,   // Number of characters in input stream
      line_count = 0,   // Number of newlines
      white_count = 0,  // Number of whitespace characters
      digit_count = 0,  // Number of digits
      other_count = 0;  // Number of other characters

  cin >> noskipws;
  int count = 0;
  while (cin >> C) {
    
    ++char_count;  // Increment overall character count
    switch (C) {   // Classify each character
      case '\n':   // Newline
        ++line_count;
        count = 0;
        [[fallthrough]]; // Added to indicate that fallthrough is expected
      case ' ':  // White space (newline, blank or tab)
      case '\t':
        ++white_count;
        count = 0;
        break;
      case '0':  // Decimal digit
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        ++digit_count;
        count = 0;
        break;
      case 'M':
        count=1;
        ++other_count;
        break;
      case 'S':
      ++other_count;
        if(count==1){
          count = 2;
        }
        else{
          count = 0;
          
        }
        break;
      case 'U':
        if(count ==2){
          ++other_count;
          // Learned about goto on cppreference.com
          //https://en.cppreference.com/w/cpp/language/goto
          goto label;
        }
        break;
          
      default:  // Other character
        ++other_count;
        break;
    }
  }
  label:
  cout << endl;
  cout << "Newlines:   " << setw(5) << line_count << endl;
  cout << "Whitespace: " << setw(5) << white_count << endl;
  cout << "Digits:     " << setw(5) << digit_count << endl;
  cout << "Other:      " << setw(5) << other_count << endl;
  cout << "Total:      " << setw(5) << char_count << endl;
  cout << endl;
}
