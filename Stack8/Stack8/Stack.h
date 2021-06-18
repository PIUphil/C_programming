#ifndef STACK_H
#define STACK_H
//#pragma once
#include "SafeArray.h"

template <typename T>
class Stack {
public:
	explicit Stack(int size = STACK_SIZE);
	//~Stack();

	bool full() const;
	bool empty() const;

	void push(const T& data);		// class타입의 객체가 들어올수있는데, 복사생성자.소멸자가 호출됨,, -> 클래스타입 받을땐 레퍼런스로 받자
	const T& pop();

private:
	static const int STACK_SIZE;


	SafeArray<T> arr_;					// 'has-a'
	int tos_;

	Stack(const Stack<T>& rhs);						// 컴파일러가 자동적으로 만들어주는 함수
	Stack<T>& operator=(const Stack<T>& rhs);		// 메인에서 사용못하도록 private에 만들어줌 -> Stack s3=s2, s1=s2 안됨
};


template <typename T>
const int Stack<T>::STACK_SIZE = 100;

template <typename T>
Stack<T>::Stack(int size) : arr_(size), tos_(0) { }

// Stack<T>::~Stack() { }


template <typename T>
bool Stack<T>::full() const {
	return tos_ == Stack<T>::STACK_SIZE;
}

template <typename T>
bool Stack<T>::empty() const {
	return tos_ == 0;
}

template <typename T>
void Stack<T>::push(const T& data) {
	arr_[tos_] = data;
	++tos_;
}

template <typename T>
const T& Stack<T>::pop() {
	--tos_;
	return arr_[tos_];
}


#endif