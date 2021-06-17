#include "InvalidIndex.h"
#include "BoundArray.h"

BoundArray::BoundArray(int low, int high) : SafeArray(high-low+1), low_(low) {}

int BoundArray::lower() const {
	return low_;
}

int BoundArray::upper() const {
	return low_ + Array::size_;
}

int& BoundArray::operator[](int index) {
	if (index < low_ || index >= upper())
		throw InvalidIndex(index);
	return SafeArray::operator[](index - low_);
}

const int& BoundArray::operator[](int index) const {
	if (index < low_ || index >= upper())
		throw InvalidIndex(index);
	return SafeArray::operator[](index - low_);
}

/*
BoundArray::BoundArray(int low, int size): SafeArray(size+1),low_(low) {}

int& BoundArray::operator[](int index) {
	// throw InvalidIndex(index);
	return Array::operator[](index);
}

const int& BoundArray::operator[](int index) const {
	// throw InvalidIndex(index);
	return Array::operator[](index);
}


int BoundArray::lower() const {
	return low_;
}

int BoundArray::upper() const {
	return Array::size_;
}
*/
