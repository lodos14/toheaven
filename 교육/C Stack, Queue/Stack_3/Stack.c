//static int stack[100];  // static -> ���� c���� �ȿ��ִ� �ָ� ���ٰ��� -> main���� ���� ����.
//static int tos;         // top of stack      // �ʱⰪ 0

#include "Stack.h"      // ����ü�� ����ҰŶ� ������� ������
#include<stdio.h>
#include<stdlib.h>

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

void initStack(Stack* ps) {
    ps->tos = 0;
}


void push(Stack* ps, int data) {

    if (ps->tos == STACK_SIZE) {
        printf("stack is full\n");
        exit(1);
    }
    /*(*ps).array[(*ps).tos] = data;
    ++(*ps).tos;*/
    ps->array[ps->tos]=data ;
    ++ps->tos;


}

int pop(Stack* ps) {

    if (ps->tos == 0) {
        printf("stack is emtpy\n");
        exit(2);
    }
    /*--(*ps).tos;
    return (*ps).array[(*ps).tos];*/
    --ps->tos;
    return ps->array[ps->tos];

}