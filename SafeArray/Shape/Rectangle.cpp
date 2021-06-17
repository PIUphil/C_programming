#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int w, int h)
	:Shape(x, y), width_(w), height_(h) {}

double Rectangle::area() const {
	return width_ * height_;
}


int Rectangle::width() const { return width_; }
int Rectangle::height() const { return height_; }