#include<stdio.h>
#include"Stack.h"


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



