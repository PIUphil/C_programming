#include <stdio.h>
#include "Stack.h"

//void push(Stack, int data);
//int pop(Stack);

int main(void) {

    //struct stack s1, s2;
    Stack s1, s2;

    /*for (int i = 0; i < 100; ++i) {
        s1.array[i] = 0;
        s2.array[i] = 0;
    }*/
    /*s1.tos = 0;
    s2.tos = 0;*/
    initStack(&s1);             // 주소를 전달 해서 초기화,,,
    initStack(&s2);


    push(&s1, 100);
    push(&s1, 200);
    push(&s1, 300);
    
    printf("s1 1st pop() : %d\n", pop(&s1));
    printf("s1 2nd pop() : %d\n", pop(&s1));
    printf("s1 3rd pop() : %d\n", pop(&s1));

    push(&s2, 900);
    push(&s2, 800);
    push(&s2, 700);

    printf("s2 1st pop() : %d\n", pop(&s2));
    printf("s2 2nd pop() : %d\n", pop(&s2));
    printf("s2 3rd pop() : %d\n", pop(&s2));

    pop(&s2);

    return 0;           // 0 : 프로그램이 정상적으로 종료되었습니다.
}


//struct stack s1, s2;
//push(s1, 100);			// 어느 스택에 넣을거냐 -> 인자로 전달
//push(s2, 100);


//struct stack {					// 사용자정의형		// class, struct구조체
//	int array[100];
//	int tos;
//};
//
//// struct stack s1, s2;
//struct stack stacks[10];
