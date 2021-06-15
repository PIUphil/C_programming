#include "Complex.h"

//Complex::Complex() {
//	this->re_ = 0.0;
//	this->im_ = 0.0;
//}

//Complex::Complex(double re) {
//	this->re_ = re;
//	this->im_ = 0.0;
//}

Complex::Complex(double re, double im) {
	this->re_ = re;
	this->im_ = im;
}

Complex::Complex(const Complex& rhs) {
	this->re_ = rhs.re_;
	this->im_ = rhs.im_;
}


Complex::~Complex() {}


Complex& Complex::operator=(const Complex & rhs) {
	this->re_ = rhs.re_;
	this->im_ = rhs.im_;

	return *this;
}

bool Complex::operator==(const Complex& rhs) {
	/*if (this->re_ == rhs.re_ && this->im_ == rhs.im_)
		return true;
	else
		return false;*/
	return (this->re_ == rhs.re_ && this->im_ == rhs.im_);
}


const Complex Complex::operator+(const Complex& rhs) {
	Complex result(this->re_ + rhs.re_, this->im_ + rhs.im_);
	return result;
}


double Complex::real() { return this->re_; }
double Complex::imag() { return this->im_; }

void Complex::real(double re) { this->re_ = re; }
void Complex::imag(double im) { this->im_ = im; }