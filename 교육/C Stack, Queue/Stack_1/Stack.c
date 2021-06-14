#include<stdio.h>

int stack[100];
int tos;           // top of stack

void push(int data)
{
	stack[tos] = data;
	++tos;
}

int pop(void)
{
	--tos;
	return stack[tos];
}


int main(void)
{
	push(100);
	push(200);
	push(300);

	printf("%d\n", pop());         // 300   last-in-frist-out
	printf("%d\n", pop());		   // 200
	printf("%d\n", pop());		   // 100
	
	return 0;
}