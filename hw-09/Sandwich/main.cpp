#include <iostream>
#include <string>

char * Sandwich(std::string & line, char * bread_ptr) {
	int length = line.length();
	char desired_letter = *bread_ptr;
    for(int i=0;i<length-1; i++){
      if(i!=0){
        char previous_letter = line.at(i-1);
				char next_character = line.at(i+1);
				if(previous_letter == next_character && previous_letter == desired_letter)
					return &line[i];
      }
    }  
	return nullptr;
}

int main() {
	std::string line = "Char is a character";
	char bread = 'a';
	char * filling_ptr = Sandwich(line, &bread);
	std::cout << *filling_ptr << std::endl; // Should be r
	*filling_ptr = 'Z';
	std::cout << line << std::endl; 
}
