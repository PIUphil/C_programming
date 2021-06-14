#include <stdio.h>
#include "Queue.h" 

int main(void) {
    push(100);
    push(200);
    
    printf("1st pop() : %d\n", pop());
    printf("2nd pop() : %d\n", pop());

    push(300);

    printf("3rd pop() : %d\n", pop());

    return 0;
}