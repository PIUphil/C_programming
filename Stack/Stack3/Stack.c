//static int stack[100];  // static -> ���� c���� �ȿ��ִ� �ָ� ���ٰ��� -> main���� ���� ����.
//static int tos;         // top of stack      // �ʱⰪ 0

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"      // ����ü�� ����ҰŶ� ������� ������

void initStack(Stack* ps) {
    ps->tos = 0;
}

void push(Stack *ps, int data) {   

    if (ps->tos== STACK_SIZE) {
        printf("stack is full\n");
        exit(1);                            // ���α׷� ���� (���̺귯���Լ� stdlib)    // 1-> ������
    }
            // �����ڵ� : 1 - ������ ���� 2 - ��Ʈ��ũ ���� ...
            // �����ڵ� : 1 - ���� ����   2 - ������ ������� ... -> ���α׷� ����»�� �������,,,
            
    //(*ps).array[(*ps).tos] = data;        // '.'�� '*'���� �켱������ ���Ƽ�,, ��ȣ() �� �������...
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

// ps�� ����Ű�� ����� array, tos