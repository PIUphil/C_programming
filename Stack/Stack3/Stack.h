#ifndef STACK_H		// STACK_H�� ���ǵǾ����� �ʴٸ�,		// ������� ������ �ѹ��� ���� �� �ֵ��� ��  // ���������� �̷��� ��,,
#define STACK_H
// #pragma once		// ��������� �ѹ��� ������ ��
#define STACK_SIZE 100


//struct stack {					// �����������		// class, struct����ü
//	int array[100];
//	int tos;
//};

typedef struct stack {					// �����������		// class, struct����ü
	//int array[100];
	int array[STACK_SIZE];
	int tos;
} Stack;					// typedef -> �̰��� Stack���� �����Ѵٴ� �ǹ�


void initStack(Stack* ps);
void push(Stack *ps, int data);     // �Լ� ���� or ���� �־����. ����� ���� ���ǰ� �־����..
int pop(Stack *ps);

#endif