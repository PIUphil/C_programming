#include <iostream>
#include "Complex.h"

int main() {

	Complex c1(3.0, 4.0);
	Complex c2 = 3.0;
	Complex c3;		
	Complex c4 = c1;

	// 치환연산(swap)
	c3 = c1;

	if (c1 == c3)	
		std::cout << "c1 and c3 are equal" << std::endl;
	else
		std::cout << "c1 and c3 are not equal" << std::endl;


	++c2;		// c2.operator++()		prefix
	c2++;		// c2.operator++(0)		postfix

	c3 = c1 + c2;
	c3 = c1 - c2;
	c4 += c3;

	c1 != c3;

	//std::cout << "c1 : (" << c1.real() << ", " << c1.imag() << "i)" << std::endl;	// c1 : (3, 4i)
	//std::cout << "c2 : (" << c2.real() << ", " << c2.imag() << "i)" << std::endl;	// c2 : (3, 0i)
	//std::cout << "c3 : (" << c3.real() << ", " << c3.imag() << "i)" << std::endl;	// c3 : (3, 4i)
	std::cout << "c1 : " << c1 << std::endl;		// cout << c1;
	std::cout << "c2 : " << c2 << std::endl;		// cout.operator<<(c1)	or	operator(cout, c1)
	std::cout << "c3 : " << c3 << std::endl;		// 라이브러리를 고칠 수 없으므로 전역함수형태(오른쪽꺼)로 만들어줘야함
	std::cout << "c4 : " << c4 << std::endl;

	return 0;
}