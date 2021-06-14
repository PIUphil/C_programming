#include <stdio.h>
#include <stdlib.h>
#include <assert.h>      // ����ó��
#include "Stack.h"

void initStack(Stack* ps, int size) {
    ps->pArr = malloc(size * sizeof(int));  // �����Ҵ� - ����
    assert(ps->pArr != NULL);               // ����(1or0). assert - ���̸� ����, �����̸� �ߴ� // NULL - �ƹ��͵� �� ����

    ps->size = size;
    ps->tos = 0;
}

void cleanupStack(Stack* ps) {
    free(ps->pArr);                         // malloc ���� �� free�� ������ �����
}

void push(Stack *ps, int data) {   

    assert(ps->tos != ps->size);
    /*if (ps->tos==ps->size) {
        printf("stack is full\n");
        exit(1);
    }*/

    ps->pArr[ps->tos] = data;               // �����ͷ� �迭�� ��� ����
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