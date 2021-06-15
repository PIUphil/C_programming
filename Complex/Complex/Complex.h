#pragma once

class Complex {
public:
	//Complex();						// default constructor 기본생성자,기저생성자
	//Complex(double re);				// convert constructor 변환생성자
	Complex(double re = 0.0, double im = 0.0);		// default인자는 뒤에서부터 줌, 헤드파일에서 설정
	Complex(const Complex& rhs);		// copy constructor 복사생성자 - (const T타입 레퍼런스) // value로 생성하면 복사생성자가 계속 생겨남...?
	~Complex();							// rhs = right-hand-side : 연산(등호)의 오른쪽에 온다는 의미,,

	Complex& operator=(const Complex& rhs);			// +=, -=, *=, /=
	bool operator==(const Complex& rhs);			// !=, >, <, >=, <=
	const Complex operator+(const Complex& rhs);	// -, *, /, ++, --, etc...

	// get
	double real();
	double imag();

	// set
	void real(double re);
	void imag(double im);


private:
	double re_;			// real	: 실수부		// m_re, mRe, re_	멤버변수라는걸 구분짓기위해 표시,,
	double im_;			// imaginary : 허수부	// m_im, mIm, im_

};