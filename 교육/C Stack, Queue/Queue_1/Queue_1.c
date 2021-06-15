#include<stdio.h>

int arr[100];
int front;
int rear;

void push(int data);

int pop(void);


int main() {

	push(100);
	push(200);

	printf("1st pop() : %d\n", pop());
	push(300);
	printf("2st pop() : %d\n", pop());
	printf("3st pop() : %d\n", pop());




	return 0;
}


void push(int n) {

	arr[rear++] = n;

}


int pop(void) {

	return arr[front++];
}
