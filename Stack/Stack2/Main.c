#include <stdio.h>       // ���̺귯������ �����ϴ� ��� ���    
#include "Stack.h"       // ���� ���丮 �ȿ� �ִ� ������� ���

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