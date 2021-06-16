#include <cassert>
#include "Queue.h"

Queue::Queue(int size) {
    this->pArr = new int[size];
    assert(this->pArr != NULL);

    this->size = size;
    this->front = 0;
    this->rear = 0;
}

Queue::~Queue() {
    delete[] this->pArr;
}

void Queue:: push(int data) {
    assert(this->rear != this->size);

    this->pArr[this->rear++] = data;
    
}

int Queue::pop() {
    assert(this->front != this->size);
    return this->pArr[this->front++];
}