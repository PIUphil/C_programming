#include <stdio.h>

int stack[100];
int tos;         // top of stack      // �ʱⰪ 0

void push(int data) {
    stack[tos++] = data;
    //++tos;
}

int pop(void) {
    //--tos;
    return stack[--tos];
}

int main(void) {         // int -> ����� int��   // void -> �Է°��� ����(��������)
    push(100);
    push(200);
    push(300);
                                // printf = print_format
    printf("%d\n", pop());      // 300    last-in-first-out      // %d - decimal 10�� ����
    printf("%d\n", pop());      // 200
    printf("%d\n", pop());      // 100

    return 0;
}