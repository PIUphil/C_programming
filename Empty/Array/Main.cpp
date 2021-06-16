#include <iostream>
#include "Array.h"

int main() {
	int nums[] = { 1, 2, 3, 4, 5 };
	const Array arr1(nums, 5);
	Array arr2(10);				// Array arr2 = 10;	-> explicit가 붙어서 이 표현방식은 사용안됨
	Array arr3 = arr1;
	Array arr4;

	arr4 = arr1;
	if (arr1 == arr4)
		std::cout << "arr1 and arr4 are equal" << std::endl;
	else 
		std::cout << "arr1 and arr4 are not equal" << std::endl;

	for (int i = 0; i < arr1.size(); ++i)
		std::cout << arr1[i] << ", ";
	std::cout << std::endl;

	return 0;
}