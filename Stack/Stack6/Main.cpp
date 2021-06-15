//#include <stdio.h>
//#include <cstdio>
#include <iostream>
#include "Stack.h"

int main() {

    //Stack s1, s2;
    Stack s1(10), s2(100);
    
    //initStack(&s1, 10);             // 스택s1, 사이즈10
    //initStack(&s2, 100);            // 스택s1, 사이즈100
    /*s1.initStack(10);
    s2.initStack(100);*/

    /*push(&s1, 100);
    push(&s1, 200);
    push(&s1, 300);*/
    s1.push(100);
    s1.push(200);
    s1.push(300);

    //s1.tos = 0;                       // 접근지정자 private이므로 접근불가
    
    /*printf("s1 1st pop() : %d\n", pop(&s1));
    printf("s1 2nd pop() : %d\n", pop(&s1));
    printf("s1 3rd pop() : %d\n", pop(&s1));*/
    /*printf("s1 1st pop() : %d\n", s1.pop());
    printf("s1 2nd pop() : %d\n", s1.pop());
    printf("s1 3rd pop() : %d\n", s1.pop());*/
    std::cout << "s1 1st pop() : " << s1.pop() << std::endl;
    std::cout << "s1 2nd pop() : " << s1.pop() << std::endl;
    std::cout << "s1 3rd pop() : " << s1.pop() << std::endl;


    /*push(&s2, 900);
    push(&s2, 800);
    push(&s2, 700);*/
    s2.push(900);
    s2.push(800);
    s2.push(700);

    /*printf("s2 1st pop() : %d\n", pop(&s2));
    printf("s2 2nd pop() : %d\n", pop(&s2));
    printf("s2 3rd pop() : %d\n", pop(&s2));*/
    /*printf("s2 1st pop() : %d\n", s2.pop());
    printf("s2 2nd pop() : %d\n", s2.pop());
    printf("s2 3rd pop() : %d\n", s2.pop());*/
    std::cout << "s2 1st pop() : " << s2.pop() << std::endl;
    std::cout << "s2 2nd pop() : " << s2.pop() << std::endl;
    std::cout << "s2 3rd pop() : " << s2.pop() << std::endl;


    /*cleanupStack(&s1);
    cleanupStack(&s2);*/
    /*s1.cleanupStack();
    s2.cleanupStack();*/    // 소멸자 자동호출됨

    return 0; 
}