#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
	Circle(int x, int y, int r);
	// Circle(const Circle& rhs);
	// virtual ~Circle();
	// Circle& operator=(const Circle& rhs);

	virtual double area() const;

	// get
	int radius() const;

private:
	int radius_;
};