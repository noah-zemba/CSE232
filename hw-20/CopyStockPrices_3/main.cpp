#include <iostream>
#include "header.hpp"

int main() {
	int const source_size = 7;
	double source[] = {3, 1, 2, 3, 67, -4, 13};
	int const destination_size = 10;
	double destination[destination_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	CopyStockPrices(source, destination);
	for (int i = 0; i < destination_size; ++i) {
		std::cout << destination[i] << std::endl;
	}
	return 0;
}