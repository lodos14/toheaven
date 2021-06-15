#include<stdio.h>
#include"queue.h"

int main() {

	Queue q1;
	Queue q2;

	initQueue(&q1, 10);
	initQueue(&q2, 100);


	push(&q1, 100);
	push(&q1, 200);
	push(&q1, 300);

	printf("1st pop() : %d\n", pop(&q1));
	printf("2st pop() : %d\n", pop(&q1));
	printf("3st pop() : %d\n", pop(&q1));

	push(&q2, 700);
	push(&q2, 800);
	push(&q2, 900);

	printf("1st pop() : %d\n", pop(&q2));
	printf("2st pop() : %d\n", pop(&q2));
	printf("3st pop() : %d\n", pop(&q2));

	cleanupQueue(&q1);
	cleanupQueue(&q2);

	return 0;
}

