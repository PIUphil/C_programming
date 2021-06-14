#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Queue.h"

void initQueue(Queue* pq, int size) {
    pq->pArr = malloc(size * sizeof(int));
    assert(pq->pArr != NULL);

    pq->size = size;
    pq->front = 0;
    pq->rear = 0;
}

void cleanupQueue(Queue* pq) {
    free(pq->pArr);
}

void push(Queue* pq, int data) {
    assert(pq->rear != pq->size);

    pq->pArr[pq->rear] = data;
    ++pq->rear;
}

int pop(Queue* pq) {
    assert(pq->front != pq->size);
    return pq->pArr[pq->front++];
}