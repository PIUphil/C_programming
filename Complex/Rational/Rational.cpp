#include <cassert>
#include "Rational.h"

Rational::Rational(int num, int den) {
	assert(den != 0.0);
	if (den < 0) { num *= -1; den *= -1; }
	this->num_ = num;
	this->den_ = den;
}

Rational::Rational(const Rational& rhs) {
	this->num_ = rhs.num_;
	this->den_ = rhs.den_;
}

Rational::~Rational() {}


Rational& Rational::operator=(const Rational& rhs) {
	this->num_ = rhs.num_;
	this->den_ = rhs.den_;
	return *this;
}

bool Rational::operator==(const Rational& rhs) {
	return (this->num_ * rhs.den_ == this->den_ * rhs.num_);
}

const Rational Rational::operator+(const Rational& rhs) {
	// a/A + b/B = (aB+Ab) / A*B
	Rational result(this->num_ * rhs.den_ + this->den_ * rhs.num_, this->den_ * rhs.den_);
	return result;
}


double Rational::num() { return num_; }
double Rational::den() { return den_; }

void Rational::num(int num) { this->num_ = num; }
void Rational::den(int den) { this->den_ = den; }
