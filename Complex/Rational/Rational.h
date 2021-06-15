#pragma once

class Rational {
public:
	Rational(double num = 0, double den = 1);		// num: numerator ���� / den : denominator �и�
	Rational(const Rational& rhs);
	~Rational();

	// operator overloading ������ �ߺ�
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
	double num_, den_;		// num: numerator ���� / den : denominator �и�
};