//static int stack[100];  // static -> 같은 c파일 안에있는 애만 접근가능 -> main에선 접근 못함.
//static int tos;         // top of stack      // 초기값 0

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"      // 구조체를 사용할거라서 헤더에서 가져옴

void initStack(Stack* ps) {
    ps->tos = 0;
}

void push(Stack *ps, int data) {   

    if (ps->tos== STACK_SIZE) {
        printf("stack is full\n");
        exit(1);                            // 프로그램 종료 (라이브러리함수 stdlib)    // 1-> 에러값
    }
            // 에러코드 : 1 - 데이터 문제 2 - 네트워크 문제 ...
            // 에러코드 : 1 - 스택 꽉참   2 - 스택이 비어있음 ... -> 프로그램 만드는사람 마음대로,,,
            
    //(*ps).array[(*ps).tos] = data;        // '.'이 '*'보다 우선순위가 높아서,, 괄호() 를 해줘야함...
    //++(*ps).tos;
    ps->array[ps->tos] = data;
    ++ps->tos;
}

int pop(Stack *ps) {

    if (ps->tos==0) {
        printf("stack is empty\n");
        exit(2);
    }

    //--(*ps).tos;
    //return (*ps).array[(*ps).tos];
    --ps->tos;
    return ps->array[ps->tos];
}

// ps가 가리키는 대상의 array, tos