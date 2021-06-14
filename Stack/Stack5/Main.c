#include <stdio.h>
#include "Stack.h"

int main(void) {

    Stack s1, s2;

    initStack(&s1, 10, sizeof(int));             // ����s1, ������10
    initStack(&s2, 100, sizeof(double));            // ����s1, ������100

    int i;
    i = 100;    push(&s1, &i);  // push(&s1, &i, sizeof(int));        // �ּҰ��� �����������... &i      
    i = 200;    push(&s1, &i);                         // sizeof(int) ó���� �־������Ƿ� ��������
    i = 300;    push(&s1, &i);

    
    // int i; i = pop(&s1); printf(i);
    pop(&s1, &i);      printf("s1 1st pop() : %d\n", i);
    pop(&s1, &i);      printf("s1 2nd pop() : %d\n", i);
    pop(&s1, &i);      printf("s1 3rd pop() : %d\n", i);

    /*printf("s1 1st pop() : %d\n", pop(&s1));
    printf("s1 2nd pop() : %d\n", pop(&s1));
    printf("s1 3rd pop() : %d\n", pop(&s1));*/

    /*push(&s2, 900);
    push(&s2, 800);
    push(&s2, 700);*/

    double d;
    d = 1.1;        push(&s2, &d);
    d = 2.2;        push(&s2, &d);
    d = 3.3;        push(&s2, &d);

    pop(&s2, &d);      printf("s2 1st pop() : %f\n", d);
    pop(&s2, &d);      printf("s2 2nd pop() : %f\n", d);
    pop(&s2, &d);      printf("s2 3rd pop() : %f\n", d);

    /*pop(&s2, &i);      printf("s2 1st pop() : %d\n", i);
    pop(&s2, &i);      printf("s2 2nd pop() : %d\n", i);
    pop(&s2, &i);      printf("s2 3rd pop() : %d\n", i);*/

    /*printf("s2 1st pop() : %d\n", pop(&s2));
    printf("s2 2nd pop() : %d\n", pop(&s2));
    printf("s2 3rd pop() : %d\n", pop(&s2));*/

    // pop(&s2);        // ���̻� pop�Ұ� ���� -> (assert)����׿��� �߻�

    cleanupStack(&s1);
    cleanupStack(&s2);

    return 0; 
}