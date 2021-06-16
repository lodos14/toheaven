
#ifndef STACK_H    
#define STACK_H
#include"array.h"
class Stack{

private:

	static const int STACK_SIZE;
	//int* pArr;
	//int size;
	Array arr_;
	int tos_;

	Stack(const Stack& rhs);
	//Stack& operator=(const Stack& rhs);     // ���ο����� ���� �����ڿ� ������ ���� ����

public:

	explicit Stack(int size = STACK_SIZE);
	~Stack();

	bool full()const;
	bool empty() const;


	void push(int data);
	int pop();


};



#endif);