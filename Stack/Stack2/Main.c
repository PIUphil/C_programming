#include <stdio.h>       // 라이브러리에서 제공하는 기능 사용    
#include "Stack.h"       // 같은 디렉토리 안에 있는 헤더파일 사용

int main(void) {         // int -> 결과가 int형   // void -> 입력값이 없음(생략가능)
    push(100);
    push(200);
    push(300);
                                // printf = print_format
    printf("%d\n", pop());      // 300    last-in-first-out      // %d - decimal 10진 정수
    printf("%d\n", pop());      // 200
    printf("%d\n", pop());      // 100

    return 0;
}