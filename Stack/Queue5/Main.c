#include <stdio.h>
#include "Queue.h"

int main(void) {

    Queue q1, q2;

    initQueue(&q1, 10, sizeof(int));
    initQueue(&q2, 100, sizeof(double));

    int i;
    i = 100;    push(&q1, &i);
    i = 200;    push(&q1, &i);
    i = 300;    push(&q1, &i);


    pop(&q1, &i);      printf("q1 1st pop() : %d\n", i);
    pop(&q1, &i);      printf("q1 2nd pop() : %d\n", i);
    pop(&q1, &i);      printf("q1 3rd pop() : %d\n", i);

    double d;
    d = 1.1;        push(&q2, &d);
    d = 2.2;        push(&q2, &d);
    d = 3.3;        push(&q2, &d);

    pop(&q2, &d);      printf("q2 1st pop() : %f\n", d);
    pop(&q2, &d);      printf("q2 2nd pop() : %f\n", d);
    pop(&q2, &d);      printf("q2 3rd pop() : %f\n", d);

    cleanupQueue(&q1);
    cleanupQueue(&q2);

    return 0;
}