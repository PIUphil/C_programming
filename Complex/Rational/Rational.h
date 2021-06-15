#pragma once

class Rational {
public:
	Rational(double num = 0, double den = 1);		// num: numerator 분자 / den : denominator 분모
	Rational(const Rational& rhs);
	~Rational();

	// operator overloading 연산자 중복
	Rational& operator=(const Rational& rhs);
	bool operator==(const Rational& rhs);
	const Rational operator+(const Rational& rhs);

	// get
	double num();
	double den();
	// set
	void num(double num);	
	void den(double den);

private:
	double num_, den_;		// num: numerator 분자 / den : denominator 분모
};