
#ifndef QUEUE_H
#define QUEUE_H

typedef struct {

	int array[100];
	int front, rear;

} Queue;

void initQueue(Queue* pq);
void push(Queue *pq, int data);
int pop(Queue *pq);

#endif