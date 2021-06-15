#ifndef Queue_H
#define Queue_H

class Queue {
private:
	int* pArr;
	int size;
	int front, rear;

public:
	Queue(int size);
	~Queue();
	void push(int data);
	int pop();
};

#endif