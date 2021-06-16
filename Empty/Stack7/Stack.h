#ifndef STACK_H
#define STACK_H
#include "Array.h"

class Stack {
public:
	explicit Stack(int size = STACK_SIZE);
	//~Stack();

	bool full() const;
	bool empty() const;

	void push(int data);
	int pop();

private:
	static const int STACK_SIZE;

	/*int* pArr;
	int size;*/
	Array arr_;					// 'has-a'
	int tos_;

	Stack(const Stack& rhs);				// 컴파일러가 자동적으로 만들어주는 함수
	Stack& operator=(const Stack& rhs);		// 메인에서 사용못하도록 private에 만들어줌 -> Stack s3=s2, s1=s2 안됨
};

#endif