### [ from C to C++ ]
---
#### 1. 확장자 .c --> .cpp
   malloc이 void*로 되어있어서, int*를 명시해 줌 

#### 2. push(&s1, 100) --> s1.push(100)
   Cpp는 멤버함수를 사용할 수 있다
  
#### 3. malloc() / free() --> new() / delete() 연산자

#### 4. <assert.h> --> namespace가 적용된 <cassert>
   #import <assert.h> --> #import <cassert>

#### 5. 생성자(constructor), 소멸자(destructor)
   initStack --> Stack // cleanupStack --> ~Stack

#### 6. 접근지정자 (private, protected, public)

#### 7. struct --> class
   - class(C++) = struct(in C) + 멤버함수 + 접근지정자

#### 8. scanf() / printf() --> iostream 입출력(cin, cout)
   #import <cstdio> --> #import <iostream>

---
   
#### A1. int main(void) --> int main()
     입력값이 없을 때 void 생략(c언어에선 void를 안쓰면 입력값이 뭐가 들어올지 모른다고 판단..)

#### A2(2-1). typedef struct {...} Stack; --> typedef X
   전역함수를 멤버함수로 struct안에 넣어줌
   ps --> this (this-> : 자기자신을 호출한 객체를 가리킴)
