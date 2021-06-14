
#ifndef STACK_H    // include�� �� ���� �ص� �ǰ� ����
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

void push(Stack *ps, const void *pData);    // �ּ������Ҷ� void
//int pop(Stack *ps);
void pop(Stack* ps, void* pData);

#endif);