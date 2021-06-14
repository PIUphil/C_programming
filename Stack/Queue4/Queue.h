#ifndef Queue_H
#define Queue_H

typedef struct Queue {
	int* pArr;
	int size;
	int front, rear;
} Queue;


void initQueue(Queue* pq, int size);
void cleanupQueue(Queue* pq);
void push(Queue* pq, int data);
int pop(Queue* pq);

#endif