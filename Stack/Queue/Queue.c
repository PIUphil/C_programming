#include <stdio.h>

int queue[100];
int front, rear;

void push(int data) {
    queue[rear++] = data;
}

int pop(void) {
    //return queue[front++];

    int tmp = front;
    ++front;
    return queue[tmp];
}

int main(void) {
    push(100);
    push(200);
    
    printf("1st pop() : %d\n", pop());

    push(300);

    printf("2nd pop() : %d\n", pop());
    printf("3rd pop() : %d\n", pop());

    return 0;
}