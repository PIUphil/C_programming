#pragma once

class Complex {
public:
	//Complex();						// default constructor �⺻������,����������
	//Complex(double re);				// convert constructor ��ȯ������
	Complex(double re = 0.0, double im = 0.0);		// default���ڴ� �ڿ������� ��, ������Ͽ��� ����
	Complex(const Complex& rhs);		// copy constructor ��������� - (const TŸ�� ���۷���) // value�� �����ϸ� ��������ڰ� ��� ���ܳ�...?
	~Complex();							// rhs = right-hand-side : ����(��ȣ)�� �����ʿ� �´ٴ� �ǹ�,,

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
	double re_;			// real	: �Ǽ���		// m_re, mRe, re_	���������°� ������������ ǥ��,,
	double im_;			// imaginary : �����	// m_im, mIm, im_

};