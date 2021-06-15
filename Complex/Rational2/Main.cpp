#include <iostream>
#include "Rational.h"

int main() {
	Rational r0;
	std::cout << "r0 : " << r0 << std::endl;

	Rational r1(2, -3);
	Rational r2 = 3;
	Rational r3;
	Rational r4 = r1;

	r3 = r1;

	if (r1 == r3)			// r1.operator==(r3)
		std::cout << "r1 and r3 are equal" << std::endl;
	else
		std::cout << "r1 and r3 are not equal" << std::endl;

	++r2;		// r2.operator++()		prefix
	r2++;		// r2.operator++(0)		postfix
	
	r3 = r1 + r2;			// r1.operator+(r2);
	r3 = r1 - r2;
	r4 += r3;

	std::cout << (r1 != r3) << std::endl;

	std::cout << "r1 : " << r1 << std::endl;
	std::cout << "r2 : " << r2 << std::endl;
	std::cout << "r3 : " << r3 << std::endl;
	std::cout << "r4 : " << r4 << std::endl;

	return 0;
}
