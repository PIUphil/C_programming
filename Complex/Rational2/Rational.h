#pragma once
#include <iostream>

class Rational {
	friend std::ostream& operator<<(std::ostream& out, Rational& rhs);

public:
	Rational(int num = 0, int den = 1);
	Rational(const Rational& rhs);
	~Rational();

	// operator overloading 연산자 중복
	Rational& operator=(const Rational& rhs);
	Rational& operator+=(const Rational& rhs);
	Rational& operator-=(const Rational& rhs);
	Rational& operator*=(const Rational& rhs);
	Rational& operator/=(const Rational& rhs);

	bool operator==(const Rational& rhs) const;
	bool operator!=(const Rational& rhs) const;
	bool operator>(const Rational& rhs) const;
	bool operator<(const Rational& rhs) const;
	bool operator>=(const Rational& rhs) const;
	bool operator<=(const Rational& rhs) const;

	const Rational operator+(const Rational& rhs) const;
	const Rational operator-(const Rational& rhs) const;
	const Rational operator*(const Rational& rhs) const;
	const Rational operator/(const Rational& rhs) const;
	const Rational operator^(const int& n) const;

	Rational& operator++();			// prefix
	Rational operator++(int);		// post fix
	Rational& operator--();
	Rational operator--(int);

	// get
	int num() const;
	int den() const;
	int gcd(int a, int b);
	// set
	void num(int num);
	void den(int den);

private:
	int num_, den_;		// num: numerator 분자 / den : denominator 분모
	int gcd_(int a, int b);
}; 
