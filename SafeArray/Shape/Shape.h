#pragma once

class Shape {			// ABC ; Abstract Base Class �߻� ����(�⺻) Ŭ���� (���������Լ��� �ϳ��̻� ���� Ŭ����)
						// ShapeŸ���� ��ü�� ���� �� ����. �����ͳ� ���۷����� ����.
public:
	explicit Shape(int x = 0, int y = 0);
	// Shape(const Shape& rhs);
	virtual ~Shape() {}					// �ζ����Լ�
	// Shape& operator=(const Shape& rhs);


	// get set is omitt.				// omitt : �����ϴ�

	void move(int x, int y);

	virtual double area() const = 0;  // ���������Լ�(pure virtual function) - ���� ���� ���ϰڰ�, �ڽĵ����� ������ �����ϰ� ��

// private:
protected:
	int x_;
	int y_;
};