#include <iostream>
#include "Rational.h"

int main() {
	Rational r1(2, -3);
	Rational r2 = 3;
	Rational r3;
	Rational r4 = r1;

	r3 = r1;

	if (r1 == r3)			// r1.operator==(r3)
		std::cout << "r1 and r3 are equal" << std::endl;
	else
		std::cout << "r1 and r3 are not equal" << std::endl;


	r3 = r1 + r2;			// r1.operator+(r2);

	std::cout << "r1 : " << r1.num() << " / " << r1.den() << std::endl;
	std::cout << "r2 : " << r2.num() << " / " << r2.den() << std::endl;
	std::cout << "r3 : " << r3.num() << " / " << r3.den() << std::endl;
	std::cout << "r4 : " << r4.num() << " / " << r4.den() << std::endl;

	return 0;
}
