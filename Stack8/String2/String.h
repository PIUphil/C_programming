//#pragma once
#ifndef STRING_H
#define STRING_H
#include <iostream>
#include "StringRep.h"


std::ostream& operator<<(std::ostream& out, const String& rhs);


class String {

public:
	//String();
	String(const char* s = NULL);		// 	String(const char* s = 0);
	String(const String& rhs);
	~String();

	String& operator=(const String& rhs);
	String& operator=(const char* str);			// �Լ��� �����θ� �ӽð�ü�� ����������ʾƼ� �ӵ��� ��������..

	bool operator==(const String& rhs) const;

	const String operator+(const String& rhs) const;

	char& operator[](int index);
	const char& operator[](int index) const;


	// get
	const char *c_str() const;
	int size() const;

	//set�� ����,, - string�� len�� ������ �ٲ�⶧���� ���� ���ε��� �����ʿ� ������

private:
	// char* str_;
	// int len_;
	StringRep* ptr_;							// stringrep : string ���α����� ���� ��,,
	
	String(const char* s, bool);			// ����Լ������� ����ϴ� ������	// bool�� �ǹ̾���. �ٸ� �����ڿ� ���̸� �α�����
};

#endif