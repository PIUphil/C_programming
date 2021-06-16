#include <iostream>
#include "SafeArray.h"

int main() {

	int nums[] = { 1, 2, 3, 4, 5 };
	Array arr1(nums, 5);

	SafeArray arr2(nums, 5);

	arr1[5] = 6;
	for (int i = 0; i != arr1.size(); ++i) {
		std::cout << arr1[i];
		std::cout << ((i < arr1.size() - 1) ? ", " : "");
	}
	std::cout << std::endl;

	arr2[5] = 6;
	for (int i = 0; i != arr1.size(); ++i) {
		std::cout << arr2[i];
		std::cout << ((i < arr2.size() - 1) ? ", " : "");
	}
	std::cout << std::endl;

	return 0;
}