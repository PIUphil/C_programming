#pragma once
#include "SafeArray.h"

class BoundArray : public SafeArray {
public:
	explicit BoundArray(int low, int size);

	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;

	// get
	int lower() const;
	int upper() const;

private:
	int low_;
};