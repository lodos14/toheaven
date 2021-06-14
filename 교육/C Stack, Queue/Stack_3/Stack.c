//static int stack[100];  // static -> 같은 c파일 안에있는 애만 접근가능 -> main에선 접근 못함.
//static int tos;         // top of stack      // 초기값 0

#include "Stack.h"      // 구조체를 사용할거라서 헤더에서 가져옴
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