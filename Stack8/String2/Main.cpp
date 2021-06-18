#include <iostream>
#include "String.h"

int main() {
	String s1 = "hello, world";		// String s1("hello, world");
	const String s2 = s1;			// const String s2(s1);
	String s3;

	s3 = s1;
	s3 = "greeting";				// String tmp("greeting");	  s3=tmp;	tmp.~String();
									// 함수로 만들어두면 tmp(임시객체)를 안만들어도되므로 빨라짐
	std::cout << "s3 : " << s3 << std::endl;

	if (s1 == s3)
		std::cout << "s1 and s3 are equal" << std::endl;
	else
		std::cout << "s1 and s3 are not equal" << std::endl;

	const String s4 = " ai robot";
	s3 = s1 + s4;

	for (int i = 0; i != s1.size(); ++i)
		std::cout << s1[i] << " ";
	std::cout << std::endl;


	//std::cout << "s1 : " << s1.c_str() << ", s1 len : " << s1.size() << std::endl;
	std::cout << "s3 : " << s3 << std::endl;

	return 0;
}
