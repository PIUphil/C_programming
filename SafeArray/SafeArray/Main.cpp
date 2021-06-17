#include <iostream>
#include "SafeArray.h"

int main() {

	int nums[] = { 1, 2, 3, 4, 5 };
	Array arr1(nums, 5);

	SafeArray arr2(nums, 5);

	/*arr1[5] = 6;
	for (int i = 0; i != arr1.size(); ++i) {
		std::cout << arr1[i];
		std::cout << ((i < arr1.size() - 1) ? ", " : "");
	}
	std::cout << std::endl;*/

	//arr2[5] = 6;
	/*for (int i = 0; i != arr1.size(); ++i) {
		std::cout << arr2[i];
		std::cout << ((i < arr2.size() - 1) ? ", " : "");
	}
	std::cout << std::endl;*/

								// 부모클래스의 포인터는 자식클래스의 객체를 가리킬 수 있다
	Array* pArr = &arr1;		// 다형성 - 함수 인자전달할 때, 리턴시킬 때 쓰임
	//pArr = &arr2;				// pArr - Array타입, arr2 - SafeArray타입


	// (*pArr)[5] = 6;				// (*pArr).operator[](5);		// pArr->operator[](5);
									// 오버라이딩 - 재정의 (자식이 부모에 있는 같은이름의 함수로 사용할 때)
									// 스태틱바인딩 (정적 바인딩)  -> virtual을 붙이면(가상함수) 동적바인딩이 됨
									// 소멸자도 virtual 붙여줘야함

	pArr = new SafeArray(arr2);
	
	(*pArr)[5] = 6;

	delete pArr;			// pArr 은 배열공간이 아니라서 delete[] 가 아님.?
							// 객체는 자식껀데(SafeArray타입) 소멸자가 부모꺼가 실행되므로,, 부모소멸자에 virtual 붙여줘야함
	return 0;
}

