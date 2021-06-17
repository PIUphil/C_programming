#pragma once
#include "Array.h"

class SafeArray : public Array {
public:
	//SafeArray();
	explicit SafeArray(int size = Array::ARRAY_SIZE);
	SafeArray(const int* pArr, int size);
	// SafeArray(const SafeArray& rhs);
	// virtual ~SafeArray();
	// SafeArray& operator=(const SafeArray&);

	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;

private:


};