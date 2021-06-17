#pragma once

class Shape {			// ABC ; Abstract Base Class 추상 기저(기본) 클래스 (순수가상함수를 하나이상 가진 클래스)
						// Shape타입의 객체는 만들 수 없다. 포인터나 레퍼런스는 가능.
public:
	explicit Shape(int x = 0, int y = 0);
	// Shape(const Shape& rhs);
	virtual ~Shape() {}					// 인라인함수
	// Shape& operator=(const Shape& rhs);


	// get set is omitt.				// omitt : 생략하다

	void move(int x, int y);

	virtual double area() const = 0;  // 순수가상함수(pure virtual function) - 나는 정의 못하겠고, 자식들한테 강제로 정의하게 함

// private:
protected:
	int x_;
	int y_;
};