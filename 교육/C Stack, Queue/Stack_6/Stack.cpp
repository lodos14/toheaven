

#include "Stack.h"     
//#include<assert.h>
#include<cassert>


Stack::Stack(int size) {

    //this->pArr = (int*)malloc(size * sizeof(int));   // this =>   s1.push() �̸� s1��, s2.push() �̸� s2
                                                       // �� �ڱ� �ڽ��� ȣ���� 

    this->pArr = new int[size];
    assert(this->pArr != NULL);   

    this->size = size;
    this->tos = 0;
}


void Stack::push(int data) {

    assert(this->tos != this->size);

    this->pArr[this->tos]=data ;  

    ++this->tos;


}

Stack::~Stack() {
    //free(this->pArr);
    delete[] this->pArr;
}

int Stack::pop() {

    assert(this->tos !=0);
    
    --this->tos;
    return this->pArr[this->tos];

}