// #pragma once
#ifndef ARRAY_H
#define ARRAY_H
// #define ARRAY_SIZE 100
#include <iostream>

// extern const int ARRAY_SIZE;			// extern선언을 해줘야 다른 cpp에서 사용가능
	// 전역변수인데 클래스와 관련있는거면 static으로 만들어줌,, // 클래스 안에 넣어줌
								

class Array {

public:
	/*
	Array();
	Array(const Array& rhs);
	~Array();
	Array& operator=(const Array& rhs);
	Array* operator&();
	const Array* operator&() const;
	*/

	//Array();
	explicit Array(int size = ARRAY_SIZE);			// explicit : 명시적인	-> 묵시적으로 형변환 되는것을 막음
	Array(const int* pArr, int size);
	Array(const Array& rhs);
	~Array();

	Array& operator=(const Array& rhs);				// deep-copy가 되도록 만들어줌

	bool operator==(const Array& rhs) const;

	int& operator[](int index);
	const int& operator[](int index) const;

	// get
	int size() const;

private:
	static const int ARRAY_SIZE;				// static 멤버변수 - 클래스와 관련된 전역변수

	int size_;
	int* pArr_;
};

#endif