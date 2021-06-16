#include "Queue.h"

const int Queue::QUEUE_SIZE = 100;

Queue::Queue(int size) : arr_(size), front_(0), rear_(0) { }

// Queue::~Queue() { }


bool Queue::full() const{
    return rear_ == Queue::QUEUE_SIZE;
}

bool Queue::empty() const {
    return front_ == rear_;
}

void Queue::push(int data) {
    arr_[rear_] = data; 
    ++rear_;
}

int Queue::pop() {
    return arr_[front_++];
}