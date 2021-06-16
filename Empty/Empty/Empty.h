#pragma once
class Empty {
public:
	// Empty() { }
	// Empty(const Empty& rhs)	{ /* memberwise copy ! */ }		// 멤버변수를 치환하는 함수가 만들어짐
	// ~Empty() { }

	// Empty& operator=(const Empty& rhs) { /* memberwise copy ! */ }	// 치환연산
	// Empty* operator&() { return this; }								// 주소값을 리턴함
	// const Empty* operator&() const { return this; }		// 위에꺼와 const차이,, 함수중복(오버로딩)가능

};

