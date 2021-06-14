#include <stdio.h>
#include <stdlib.h>
#include <assert.h>      // 예외처리
#include "Stack.h"

void initStack(Stack* ps, int size) {
    ps->pArr = malloc(size * sizeof(int));  // 동적할당 - 생성
    assert(ps->pArr != NULL);               // 논리값(1or0). assert - 참이면 진행, 거짓이면 중단 // NULL - 아무것도 안 가짐

    ps->size = size;
    ps->tos = 0;
}

void cleanupStack(Stack* ps) {
    free(ps->pArr);                         // malloc 쓰면 꼭 free가 쌍으로 따라옴
}

void push(Stack *ps, int data) {   

    assert(ps->tos != ps->size);
    /*if (ps->tos==ps->size) {
        printf("stack is full\n");
        exit(1);
    }*/

    ps->pArr[ps->tos] = data;               // 포인터로 배열식 사용 가능
    // *(ps->pArr + ps->tos)
    ++ps->tos;
}

int pop(Stack *ps) {

    assert(ps->tos != 0);
    /*if (ps->tos==0) {
        printf("stack is empty\n");
        exit(2);
    }*/

    --ps->tos;
    return ps->pArr[ps->tos];
}