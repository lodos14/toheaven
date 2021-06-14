
#ifndef STACK_H    // include를 한 번한 해도 되게 해줌
#define STACK_H
#define STACK_SIZE 100

/*
struct stack {
	int array[100];
	int tos;

};

void push(struct stack s, int data);
int pop(struct stack s);

#endif
*/


//typedef struct {
//	int array[100];
//	int tos;
//
//} Stack;
//
//void push(Stack *ps, int data);
//int pop(Stack *ps);
//
//#endif);

typedef struct {
	int array[STACK_SIZE];
	int tos;

} Stack;

void initStack(Stack* ps);
void push(Stack *ps, int data);
int pop(Stack *ps);

#endif);