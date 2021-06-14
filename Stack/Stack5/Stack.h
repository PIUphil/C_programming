#ifndef STACK_H
#define STACK_H

typedef struct stack {
	//int* pArr;
	void* pArr;
	int eleSize;
	int size;
	int tos;
} Stack;


// void initStack(Stack* ps, int size);
void initStack(Stack* ps, int size, int eleSize);		//	element_size

void cleanupStack(Stack* ps);

// void push(Stack *ps, int data);
void push(Stack* ps, const void *pData);	// 주소만 다룰 때 포인터 사용,, void 포인터		// const = read only

// int pop(Stack *ps);
void pop(Stack* ps, void* pData);		// 포인터가 가리키는  대상이 바뀌므로 const 주면 안됨

#endif