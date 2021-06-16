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

	Stack(const Stack& rhs);				// �����Ϸ��� �ڵ������� ������ִ� �Լ�
	Stack& operator=(const Stack& rhs);		// ���ο��� �����ϵ��� private�� ������� -> Stack s3=s2, s1=s2 �ȵ�
};

#endif