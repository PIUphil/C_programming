#include <cassert>
#include "Rational.h"

Rational::Rational(double num, double den) {
	assert(den != 0.0);
	this->num_ = num;
	this->den_ = den;
}

Rational::Rational(const Rational& rhs) {
	this->num_ = rhs.num_;
	this->den_ = rhs.den_;
}

Rational::~Rational() {}



double Rational::num() { return num_; }
double Rational::den() { return den_; }

void Rational::num(double num) { this->num_ = num; }
void Rational::den(double den) { this->den_ = den; }