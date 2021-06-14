#include <stdio.h>
#include <stdlib.h>
#include <string.h>     // memset, memcpy, memcmp
#include <assert.h>
#include "Stack.h"

void initStack(Stack* ps, int size, int eleSize) {
    // ps->pArr = malloc(size * sizeof(int));
    ps->pArr = malloc(size * eleSize);
    assert(ps->pArr != NULL);

    ps->eleSize = eleSize;
    ps->size = size;
    ps->tos = 0;
}

void cleanupStack(Stack* ps) {
    free(ps->pArr); 
}

// void push(Stack *ps, int data) {   
void push(Stack *ps, const void* pData) {

    assert(ps->tos != ps->size);

    // ps->pArr[ps->tos] = data;
    // memcpy(&ps->pArr[ps->tos], pData, ps->eleSize);                  // ps : voidÆ÷ÀÎÅÍ     -> ¿ªÂüÁ¶ ¾ÈµÊ
    memcpy((unsigned char*)ps->pArr + ps->tos * ps->eleSize, pData, ps->eleSize);       // ±×³É char* ½áÁàµµµÊ
    ++ps->tos;
}


// void pop(Stack* ps, int* pData) {
void pop(Stack *ps, void *pData) {

    assert(ps->tos != 0);

    --ps->tos;

    // *pData = ps->pArr[ps->tos];
    // memcpy(pData, &ps->pArr[ps->tos], ps->eleSize);
    memcpy(pData, (unsigned char*)ps->pArr + ps->tos * ps->eleSize, ps->eleSize);
    
}

/*int pop(Stack* ps) {

    assert(ps->tos != 0);

    --ps->tos;
    return ps->pArr[ps->tos];
}*/