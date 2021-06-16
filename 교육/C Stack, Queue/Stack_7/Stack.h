
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
	//Stack& operator=(const Stack& rhs);     // 메인에서는 복사 생성자와 연산자 저건 못씀

public:

	explicit Stack(int size = STACK_SIZE);
	~Stack();

	bool full()const;
	bool empty() const;


	void push(int data);
	int pop();


};



#endif);