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
void push(Stack* ps, const void *pData);	// �ּҸ� �ٷ� �� ������ ���,, void ������		// const = read only

// int pop(Stack *ps);
void pop(Stack* ps, void* pData);		// �����Ͱ� ����Ű��  ����� �ٲ�Ƿ� const �ָ� �ȵ�

#endif