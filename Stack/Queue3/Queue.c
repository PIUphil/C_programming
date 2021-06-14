#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void initQueue(Queue* pq) {
    pq->front = 0;
    pq->rear = 0;
}

void push(Queue* pq, int data) {
    
    if (pq->rear == QUEUE_SIZE) {
        printf("queue is full\n");
        exit(1);
    }

    pq->array[pq->rear++] = data;
}

int pop(Queue *pq) {
    if (pq->front == QUEUE_SIZE) {
        printf("queue is empty\n");
        exit(2);
    }

    return pq->array[pq->front++];
}