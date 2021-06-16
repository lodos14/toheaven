

#include "Stack.h"     
//#include<assert.h>
#include<cassert>


Stack::Stack(int size) {

    //this->pArr = (int*)malloc(size * sizeof(int));   // this =>   s1.push() 이면 s1을, s2.push() 이면 s2
                                                       // 즉 자기 자신을 호출함 

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