#include <iostream>
#include <cctype>

int main() {
	int number_of_lines{0};
	std::cin >> number_of_lines;
	int line = 0;
	while( line < number_of_lines) {
		++line;
		char c{'a'};
		c += line-1;

		int element = line-1;
		while(element >= 0) {
			 
			std::cout << static_cast<char>(c + element) << element << ' ';
			--element;
		}
		std::cout << std::endl;
	}
	return 0;
}
