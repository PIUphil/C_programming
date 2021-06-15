#pragma once
#include <iostream>

class Complex {
	friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);		// 클래스 안에 있지만 전역함수임

public:
	Complex(double re = 0.0, double im = 0.0);	
	Complex(const Complex& rhs);
	~Complex();					

	Complex& operator=(const Complex& rhs);	
	Complex& operator+=(const Complex& rhs);

	bool operator==(const Complex& rhs) const;
	bool operator!=(const Complex& rhs) const;

	const Complex operator+(const Complex& rhs) const;
	const Complex operator-(const Complex& rhs) const;

	Complex& operator++();			// prefix
	Complex operator++(int );		//post fix

	// get
	double real() const;
	double imag() const;
	// set
	void real(double re);
	void imag(double im);

private:
	double re_;
	double im_;
};