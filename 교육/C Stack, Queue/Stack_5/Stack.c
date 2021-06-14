
#include "Stack.h"      // 구조체를 사용할거라서 헤더에서 가져옴
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>


void initStack(Stack* ps, int size, int eleSize) {

    //ps->pArr = malloc(size * sizeof(int));
    ps->pArr = malloc(size * eleSize);
    assert(ps->pArr != NULL);   // NULL이면 종료

    ps->eleSize = eleSize;
    ps->size = size;
    ps->tos = 0;
}


void push(Stack* ps, const void *pData) {

    assert(ps->tos != ps->size);

    //ps->pArr[ps->tos]=data ;  // *(ps->pArr + ps ->tos)
   // memcpy(&ps->pArr[ps->tos] , pData, ps->eleSize);
    memcpy((unsigned char*)ps->pArr + ps->tos * ps->eleSize, pData, ps->eleSize);
    ++ps->tos;


}

void cleanupStack(Stack *ps) {
    free(ps->pArr);
}

//int pop(Stack* ps) {
//
//    assert(ps->tos !=0);
//    
//    --ps->tos;
//    return ps->pArr[ps->tos];
//
//}

void pop(Stack* ps, void *pData) {

    assert(ps->tos !=0);
    
    --ps->tos;

    //return ps->pArr[ps->tos];
    //*pData = ps->pArr[ps->tos];
    //memcpy(pData,&ps->pArr[ps->tos] , ps->eleSize);
    memcpy(pData, (unsigned char*)ps->pArr + ps->tos * ps->eleSize, ps->eleSize);
}