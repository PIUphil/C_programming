#ifndef STACK_H		// STACK_H가 정의되어있지 않다면,		// 헤더파일 내용이 한번만 붙을 수 있도록 함  // 리눅스에선 이렇게 씀,,
#define STACK_H
// #pragma once		// 헤더파일이 한번만 들어가도록 함
#define STACK_SIZE 100


//struct stack {					// 사용자정의형		// class, struct구조체
//	int array[100];
//	int tos;
//};

typedef struct stack {					// 사용자정의형		// class, struct구조체
	//int array[100];
	int array[STACK_SIZE];
	int tos;
} Stack;					// typedef -> 이것을 Stack으로 정의한다는 의미


void initStack(Stack* ps);
void push(Stack *ps, int data);     // 함수 정의 or 선언 있어야함. 선언된 것은 정의가 있어야함..
int pop(Stack *ps);

#endif