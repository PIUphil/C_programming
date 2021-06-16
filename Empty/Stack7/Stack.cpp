#include "Stack.h"

const int Stack::STACK_SIZE = 100;

Stack::Stack(int size) : arr_(size), tos_(0) { }

// Stack::~Stack() { }


bool Stack::full() const{
    return tos_ == Stack::STACK_SIZE;
}

bool Stack::empty() const {
    return tos_ == 0;
}

void Stack::push(int data) {
    arr_[tos_] = data; 
    ++tos_;
}

int Stack::pop() {
    --tos_;
    return arr_[tos_];
}