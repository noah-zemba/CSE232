#include<sstream>
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<stdexcept>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::noskipws;
using Table_Row = vector<string>;
using Table = vector<Table_Row>;

int main(){
  string superfan_location;
  vector<int> sf_row;
  vector<int> sf_col;
  string num;
  // Get the row and col of each superfan in different vectors
  while(std::getline(cin,superfan_location)){
    int leng = superfan_location.length();
    for(int i = 1; i < leng; i++){
      char ch = superfan_location.at(i);
      if(isdigit(ch))
        num += ch;
      
      else if(ch == ','){
        sf_row.push_back(stoi(num));
        num = "";
      }
      
      else if(ch == ')')
        sf_col.push_back(stoi(num));
    }
    num = "";
  }
  // Initilize table
  Table concert_seats(14,Table_Row(24,""));
  int init_value = 45;
  int row_count = 0;
  // Give initial value to seats
  // For each row in the table
  int count = 0;
  for(vector<string> & row: concert_seats){
    // for each seat in each row
    for(string & seat_value: row){
      if(count>1 && count < 12){
        seat_value = std::to_string(init_value);
        row[0] = std::to_string(0);
        row[1] = std::to_string(0);
        row[22] = std::to_string(0);
        row[23] = std::to_string(0);
      }
      else{
        seat_value = std::to_string(0);
      }
    }
    count+=1;
    init_value+=5;
    row_count++;
  }
  // This huge for loop changes the values of the seats near a superfan
  for(size_t i = 0; i < sf_row.size(); i++){
        // Seats directly in front/ behind superfan
        concert_seats[10-sf_col[i]][2+sf_row[i]] = 
          std::to_string(stoi(concert_seats[10-sf_col[i]][2+sf_row[i]])-40);
        concert_seats[12-sf_col[i]][2+sf_row[i]] =
          std::to_string(stoi(concert_seats[12-sf_col[i]][2+sf_row[i]])-40);
        
        // Seats two in front/ behind superfan
        concert_seats[9-sf_col[i]][2+sf_row[i]] = 
          std::to_string(stoi(concert_seats[9-sf_col[i]][2+sf_row[i]])-20);
        concert_seats[13-sf_col[i]][2+sf_row[i]] =
          std::to_string(stoi(concert_seats[13-sf_col[i]][2+sf_row[i]])-20);

        // Seats directly to left/ right of superfan
        concert_seats[11-sf_col[i]][sf_row[i]+3] = 
          std::to_string(stoi(concert_seats[11-sf_col[i]][sf_row[i]+3])-40);
        concert_seats[11-sf_col[i]][sf_row[i]+1] = 
          std::to_string(stoi(concert_seats[11-sf_col[i]][sf_row[i]+1])-40);
        
        // Seats two to the left/ right of superfan
        concert_seats[11-sf_col[i]][sf_row[i]+4] =
          std::to_string(stoi(concert_seats[11-sf_col[i]][sf_row[i]+4])-20);
        concert_seats[11-sf_col[i]][sf_row[i]] =
          std::to_string(stoi(concert_seats[11-sf_col[i]][sf_row[i]])-20);

        // Seats directly to the up/right and up/left
        concert_seats[10-sf_col[i]][sf_row[i]+3] = 
          std::to_string(stoi(concert_seats[10-sf_col[i]][sf_row[i]+3])-20);
        concert_seats[10-sf_col[i]][sf_row[i]+1] =  
          std::to_string(stoi(concert_seats[10-sf_col[i]][sf_row[i]+1])-20);
         
        // Seats to the down/right and down/left
        concert_seats[12-sf_col[i]][sf_row[i]+3] = 
          std::to_string(stoi(concert_seats[12-sf_col[i]][sf_row[i]+3])-20);
        concert_seats[12-sf_col[i]][sf_row[i]+1] =  
          std::to_string(stoi(concert_seats[12-sf_col[i]][sf_row[i]+1])-20);
  }

  // This for loop puts the * where the superfans are seated
  for(size_t i = 0; i < sf_row.size(); i++){
    // Seat with superfan in it
    concert_seats[11-sf_col[i]][2+sf_row[i]] = "*";
  }

  // Print the table
  int table_size = concert_seats.size();
  for(int row = 2; row < table_size-2; row++){
    int col_size = concert_seats[row].size();
    for(int col = 2; col < col_size-2; col++){
      cout << std::right << std::setw(4) << concert_seats[row][col] << ",";
    }
    cout << endl;
  }
  return 0;
}