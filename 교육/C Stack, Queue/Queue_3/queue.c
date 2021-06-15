#include"queue.h"
#include<stdio.h>


void push(Queue *pq ,int data) {

	pq->array[pq->rear++] = data;
}

int pop(Queue *pq) {

	return pq->array[pq->front++];
}


void initQueue(Queue* pq) {

	pq->front= 0;
	pq->front= 0;
	pq->rear = 0;
	pq->rear = 0;

}