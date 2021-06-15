#### 함수 중복(function overloading)
- for one-interface-multi-method
- C언어는 똑같은 이름의 함수를 만들 수 없음
- C++는 인자의 타입, 인자의 개수가 다르면 똑같은 이름의 함수 사용가능

#### 기본 인자(default argument)
- for one-interface-multi-method


```
클래스 타입의 자료를 인자로 전달할 때,
복사생성자, 소멸자 호출의 오버헤드를 줄이기위해서 레퍼런스를 사용한다.
(오버헤드 - 속도 느려지고, 메모리 더 차지함..)
```
```
복사생성자는 인자를 전달할 때,
반드시 레퍼런스를 사용해야 한다.
value로 넘기면 무한하게 복사생성자 호출됨
```

---

#### const member func.
상수 객체인 경우 호출할 수 있는 멤버 함수.

#### const = 바뀌지않음 + read_only
　　　　 함수 뒤에 붙음

#### friend func.

#### 생성자 초기화 리스트(constructor initialization list)
   = 콜론초기화

---
과제 - 유리수(rational number) -> rational class 
　　　 분모,분자 = 정수 , 분모!=0

```
class Rational {
public:
	// ??

private:
	int num;
	int den;
};
```
