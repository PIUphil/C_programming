#ifndef QUEUE_H
#define QUEUE_H
#include "Array.h"

class Queue {
public:
	explicit Queue(int size = QUEUE_SIZE);
	//~Queue();

	bool full() const;
	bool empty() const;

	void push(int data);
	int pop();

private:
	static const int QUEUE_SIZE;

	/*int* pArr;
	int size;*/
	Array arr_;					// 'has-a'
	int front_;
	int rear_;

	Queue(const Queue& rhs);
	Queue& operator=(const Queue& rhs);
};

#endif