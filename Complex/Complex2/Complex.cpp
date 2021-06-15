#include "Complex.h"

std::ostream& operator<<(std::ostream& out, const Complex& rhs) {
	// out << "(" << rhs.real() << ", " << rhs.imag() << "i)";
	out << "(" << rhs.re_ << ", " << rhs.im_ << "i)";				// friend는 private에 접근가능
		
	return out;
}


Complex::Complex(double re, double im): re_(re), im_(im) {}

Complex::Complex(const Complex& rhs): re_(rhs.re_), im_(rhs.im_) {}

Complex::~Complex() {}


Complex& Complex::operator=(const Complex & rhs) {
	re_ = rhs.re_;
	im_ = rhs.im_;

	return *this;
}

Complex& Complex::operator+=(const Complex& rhs) {
	re_ += rhs.re_;
	im_ += rhs.im_;

	return *this;
}

bool Complex::operator==(const Complex& rhs) const {
	return (re_ == rhs.re_ && im_ == rhs.im_);
}

bool Complex::operator!=(const Complex& rhs) const {
	//return (re_ != rhs.re_ || im_ != rhs.im_);
	//return !(re_ == rhs.re_ && im_ == rhs.im_);
	return !this->operator==(rhs);
}

const Complex Complex::operator+(const Complex& rhs) const {
	Complex result(re_ + rhs.re_, im_ + rhs.im_);
	return result;
}

const Complex Complex::operator-(const Complex& rhs) const {
	Complex result(re_ - rhs.re_, im_ - rhs.im_);
	return result;
}

Complex& Complex::operator++() {
	re_ += 1.0;
	return *this;
}

Complex Complex::operator++(int) {
	Complex tmp(*this);		// 복사생성자로 임의의 객체 생성
	re_ += 1.0;
	return tmp;
}

double Complex::real() const { return re_; }
double Complex::imag() const { return im_; }

void Complex::real(double re) { re_ = re; }
void Complex::imag(double im) { im_ = im; }