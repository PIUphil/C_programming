#include <iostream>
#include "BoundArray.h"
// #include "InvalidIndex.h"

int main() {

	BoundArray arr(6, 10);
	
	//try {
	for (int i = arr.lower(); i < arr.upper(); ++i)
		arr[i] = i;

	for (int i = arr.lower(); i < arr.upper(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	/*}
	catch (const InvalidIndex& e) {
		std::cerr << "index boundary exception inavlid index : " << e.invalid() << std::endl;
	}*/

	return 0;
}