#include <iostream>
#include "Empty.h"

int main() {

	Empty e1;
	Empty e2 = e1;		// Empty e2(e1);
	const Empty e3 = e1;

	e2 = e1;			// e2.operator=(e1);	// 치환연산

	Empty *pe = &e1;	// e1.operator&();		// 포인터
	const Empty* pe2 = &e3;		// 상수객체의 주소
	

	return 0;
}