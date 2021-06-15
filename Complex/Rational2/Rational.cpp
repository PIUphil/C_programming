#include <cassert>
#include "Rational.h"


int gcd(int a, int b) {								// 최대공약수
	int c = (a % b == 0 ? b : gcd(b, a % b));
	if (c < 0) c *= -1;
	if (a * b == 0) c = 1;			// 나누는 수가 되므로 1로 지정
	return c;
}

//std::ostream& operator<<(std::ostream& out, const Rational& rhs) {
//	out << rhs.num_ << "/" << rhs.den_;
//	return out;
//}

std::ostream& operator<<(std::ostream& out, Rational& rhs) {
	if (rhs.den_ < 0) { rhs.num_ *= -1; rhs.den_ *= -1; }
	int g = gcd(rhs.num_, rhs.den_);
	rhs.num_ /= g;									// 기약분수
	rhs.den_ /= g;

	if (rhs.den_ == 1 || rhs.num_==0) out << rhs.num_;
	else out << rhs.num_ << "/" << rhs.den_;

	return out;
}

Rational::Rational(int num, int den) {
	assert(den != 0.0);
	if (den < 0) { num *= -1; den *= -1; }
	num_ = num;
	den_ = den;
}

Rational::Rational(const Rational& rhs): num_(rhs.num_), den_(rhs.den_) {}

Rational::~Rational() {}


Rational& Rational::operator=(const Rational& rhs) {
	this->num_ = rhs.num_;
	this->den_ = rhs.den_;
	return *this;
}

Rational& Rational::operator+=(const Rational& rhs) {
	this->num_ = (this->num_ * rhs.den_ + this->den_ * rhs.num_);
	this->den_ *= rhs.den_;
	return *this;
}

bool Rational::operator==(const Rational& rhs) const {
	return (this->num_ * rhs.den_ == this->den_ * rhs.num_);
}

bool Rational::operator!=(const Rational& rhs) const {
	return !this->operator==(rhs);
}

const Rational Rational::operator+(const Rational& rhs) const {
	// a/A + b/B = (aB+Ab) / A*B
	Rational result(this->num_ * rhs.den_ + this->den_ * rhs.num_, this->den_ * rhs.den_);
	return result;
}

const Rational Rational::operator-(const Rational& rhs) const {
	// a/A - b/B = (aB-Ab) / A*B
	Rational result(this->num_ * rhs.den_ - this->den_ * rhs.num_, this->den_ * rhs.den_);
	return result;
}


Rational& Rational::operator++() {
	num_ += den_;
	return *this;
}

Rational Rational::operator++(int) {
	Rational tmp(*this);
	num_ += den_;
	return tmp;
}


double Rational::num() const { return num_; }
double Rational::den() const { return den_; }

void Rational::num(int num) { this->num_ = num; }
void Rational::den(int den) { this->den_ = den; }
