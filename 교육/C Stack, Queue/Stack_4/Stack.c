//static int stack[100];  // static -> ���� c���� �ȿ��ִ� �ָ� ���ٰ��� -> main���� ���� ����.
//static int tos;         // top of stack      // �ʱⰪ 0

#include "Stack.h"      // ����ü�� ����ҰŶ� ������� ������
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//void push(Stack *ps, int data) {
//
//    /*(*ps).array[(*ps).tos] = data;
//    ++(*ps).tos;*/
//    ps->array;
//    ++ps->tos;
//}
//
//int pop(Stack *ps) {
//    /*--(*ps).tos;
//    return (*ps).array[(*ps).tos];*/
//    --ps->tos;
//    return ps->array[ps->tos];
//
//}

void initStack(Stack* ps, int size) {

    ps->pArr = malloc(size * sizeof(int));
    assert(ps->pArr != NULL);   // NULL�̸� ����

    ps->size = size;
    ps->tos = 0;
}


void push(Stack* ps, int data) {

    assert(ps->tos != ps->size);

    ps->pArr[ps->tos]=data ;  // *(ps->pArr + ps ->tos)

    ++ps->tos;


}

void cleanupStack(Stack *ps) {
    free(ps->pArr);
}

int pop(Stack* ps) {

    assert(ps->tos !=0);
    
    --ps->tos;
    return ps->pArr[ps->tos];

}