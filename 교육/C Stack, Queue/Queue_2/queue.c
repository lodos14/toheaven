#include"queue.h"

int queue[100];
int front, rear;

void push(int data) {

	queue[rear++] = data;
}

int pop(void) {

	return queue[front++];
}