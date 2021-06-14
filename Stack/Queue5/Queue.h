#ifndef Queue_H
#define Queue_H

typedef struct Queue {
	void* pArr;
	int eleSize;
	int size;
	int front, rear;
} Queue;


void initQueue(Queue* pq, int size, int eleSize);
void cleanupQueue(Queue* pq);
void push(Queue* pq, const void* pData);
void pop(Queue* pq, void* pData);

#endif