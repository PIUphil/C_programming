//#pragma once
#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 100

typedef struct queue {
	int array[QUEUE_SIZE];
	int front, rear;
} Queue;

void initQueue(Queue*);
void push(Queue*, int);
int pop(Queue*);

#endif