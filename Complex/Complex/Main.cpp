#include <iostream>
#include "Complex.h"

//void printComplex(Complex c)				// call-by-value
//{
//	std::cout << "(" << c.real() << ", " << c.imag() << "i)" << std::endl;
//}

//void printComplex(const Complex& rc)		// call-by-reference
//{
//	std::cout << "(" << rc.real() << ", " << rc.imag() << "i)" << std::endl;
//}


int main() {

	Complex c1(3.0, 4.0);						// 3.0 + 4.0i
	Complex c2 = 3.0;	// Complex c2(3.0);		// 3.0				// 인자가 하나있는 생성자는 형변환과 관련있음..
	Complex c3;									// 0
	Complex c4 = c1;	//Complex c4(c1);		// 3.0+4.0i			// c1

	// int i = 100;		// int i(100); 가능
	// c3 = 3.0;			// Complex tmp(3.0);  c3 = tmp;  tmp.~Complex();

	// 치환연산(swap)
	c3 = c1;			// c3.operator=(c1); or operator=(c3, c1);
	//c3.real(c1.real());		// c3.real(3.0);
	//c3.imag(c1.imag());		// c3.imag(4.0);

	// c3 = c2 = c1;		// daisy-chain

	if (c1 == c3)			// c1.operator==(c3)
		std::cout << "c1 and c3 are equal" << std::endl;
	else
		std::cout << "c1 and c3 are not equal" << std::endl;


	c3 = c1 + c2;			// c1.operator+(c2);

	std::cout << "c1 : (" << c1.real() << ", " << c1.imag() << "i)" << std::endl;	// c1 : (3, 4i)
	std::cout << "c2 : (" << c2.real() << ", " << c2.imag() << "i)" << std::endl;	// c2 : (3, 0i)
	std::cout << "c3 : (" << c3.real() << ", " << c3.imag() << "i)" << std::endl;	// c3 : (3, 4i)

	// printComplex(c1);

	return 0;
}