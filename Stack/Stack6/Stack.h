#ifndef STACK_H
#define STACK_H

/*typedef struct stack {
	int* pArr;
	int size;
	int tos;
} Stack;*/

//struct Stack {
class Stack {
private:
	int* pArr;
	int size;
	int tos;

public:
	//void initStack(int size);
	Stack(int size);				// constructor, 持失切
	//void cleanupStack();
	~Stack();						// destructor, 社瑚切
	void push(int data);
	int pop();
};

//void initStack(Stack* ps, int size);
//void cleanupStack(Stack* ps);
//void push(Stack *ps, int data);
//int pop(Stack *ps);

#endif