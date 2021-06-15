#include <cassert>
#include "Queue.h"

Queue::Queue(int size): size(size), front(0), rear(0) {
    this->pArr = new int[size];
    assert(this->pArr != NULL);
}

Queue::~Queue() {
    delete[] this->pArr;
}

void Queue::push(int data) {
    assert(this->rear != this->size);
    this->pArr[this->rear] = data;
    ++this->rear;
}

int Queue::pop() {
    assert(this->front != this->size);
    return this->pArr[this->front++];
}