#include <iostream>
#include <typeinfo>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

void printArea(const Shape* ps) {						// �������ε�. 

	//RTTI; runtime type identification			// Rectangle?? Circle??
	if (typeid(*ps) == typeid(Rectangle)) {
		std::cout << "Rectangle ";
		Rectangle* p = (Rectangle*)ps;
		std::cout << "width : " << p->width() << ", height : " << p->width() << " ";
	}
	else if (typeid(*ps) == typeid(Circle)) {
		std::cout << "Circle ";
		Circle* p = (Circle*)ps;
		std::cout << "radius : " << p->radius() << " ";
	}
	else
		{}
	//std::cout << (&typeid(*ps)) << " ";
	
	// �θ�Ŭ������ Ÿ������ �����͸� �޾Ƽ�,, �ڽ�Ŭ������ area�Լ��� �ҷ���
	std::cout << "area : " << ps->area() << std::endl;
}


int main() {
	// Shape s;				// �߻����Ŭ������ ��ü ���� �Ұ�
	Shape* shapes[5];		// �����ʹ� ��������. �迭�ȿ� �����Ͱ� ����
	shapes[0] = new Rectangle(50, 50, 100, 20);
	shapes[1] = new Rectangle(100, 20, 20, 10);
	shapes[2] = new Circle(10, 10, 5);
	shapes[3] = new Circle(200, 200, 15);
	shapes[4] = new Rectangle(300, 10, 5, 200);

	for (int i = 0; i < 5; ++i)
		printArea(shapes[i]);

	for (int i = 0; i < 5; ++i)
		delete shapes[i];

	return 0;
}