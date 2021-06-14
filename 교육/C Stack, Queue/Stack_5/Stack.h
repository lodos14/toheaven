
#ifndef STACK_H    // include를 한 번한 해도 되게 해줌
#define STACK_H

typedef struct {
	
	//int* pArr;
	void* pArr;
	int eleSize;
	int size;
	int tos;

} Stack;

void initStack(Stack* ps, int size, int eleSize);
void cleanupStack(Stack* ps);

void push(Stack *ps, const void *pData);    // 주소전달할때 void
//int pop(Stack *ps);
void pop(Stack* ps, void* pData);

#endif);