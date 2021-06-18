//#pragma once
#ifndef STRING_H
#define STRING_H
#include <iostream>
#include "StringRep.h"


std::ostream& operator<<(std::ostream& out, const String& rhs);


class String {

public:
	//String();
	String(const char* s = NULL);		// 	String(const char* s = 0);
	String(const String& rhs);
	~String();

	String& operator=(const String& rhs);
	String& operator=(const char* str);			// 함수를 만들어두면 임시객체가 만들어지지않아서 속도가 빨라진다..

	bool operator==(const String& rhs) const;

	const String operator+(const String& rhs) const;

	char& operator[](int index);
	const char& operator[](int index) const;


	// get
	const char *c_str() const;
	int size() const;

	//set은 생략,, - string과 len은 쌍으로 바뀌기때문에 굳이 따로따로 만들필요 없을듯

private:
	// char* str_;
	// int len_;
	StringRep* ptr_;							// stringrep : string 내부구현을 위한 것,,
	
	String(const char* s, bool);			// 멤버함수에서만 사용하는 생성자	// bool은 의미없음. 다른 생성자와 차이를 두기위함
};

#endif