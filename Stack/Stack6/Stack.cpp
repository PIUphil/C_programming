//#include <stdio.h>
//#include <cstdio>
//#include <stdlib.h>
//#include <assert.h>
#include <cassert>
#include "Stack.h"


//void initStack(Stack* ps, int size) {
//void Stack::initStack(int size) {
Stack::Stack(int size) {
    //ps->pArr = malloc(size * sizeof(int));
    //this->pArr = (int*)malloc(size * sizeof(int));  // c -> cpp
    this->pArr = new int[size];
    assert(this->pArr != NULL);               

    this->size = size;
    this->tos = 0;
}

//void cleanupStack(Stack* ps) {
//void Stack::cleanupStack() {
Stack::~Stack() {
    //free(this->pArr); 
    delete[] this->pArr;
}

//void push(Stack *ps, int data) {   
void Stack::push(int data) {

    assert(this->tos != this->size);
    /*if (ps->tos==this->size) {
        printf("stack is full\n");
        exit(1);
    }*/

    this->pArr[this->tos] = data; 
    // *(ps->pArr + ps->tos)
    ++this->tos;
}

//int pop(Stack *ps) {
int Stack::pop() {

    assert(this->tos != 0);
    /*if (ps->tos==0) {
        printf("stack is empty\n");
        exit(2);
    }*/

    --this->tos;
    return this->pArr[this->tos];
}