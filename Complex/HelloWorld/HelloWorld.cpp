#include <iostream>
using std::cout;
using std::endl;

int main() {

	cout << "hello, world" << endl;

	// cout << "hello, world";
	// cout.operator << ("hello, world");	//멤버함수형태 -> 문자열의 주소값이 출력됨
	operator<<(cout, "hello, world");		//전역함수형태		둘 중 하나로 바뀜..
	
	// cout << endl;
	cout.operator<<(endl); 
	//operator<<(cout, endl);				// 안됨

	operator<<(cout, "hello, world").operator<<(endl);		// cout << "hello, world" << endl; 의 변형


	return 0;
}