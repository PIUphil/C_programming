#include "BoundArray.h"

BoundArray::BoundArray(int low, int size): SafeArray(size+1),low_(low) {}


int& BoundArray::operator[](int index) {
	// throw InvalidIndex(index);
	return this->Array::operator[](index);
}

const int& BoundArray::operator[](int index) const {
	// throw InvalidIndex(index);
	return this->Array::operator[](index);
}


int BoundArray::lower() const {
	return low_;
}

int BoundArray::upper() const {
	return this->Array::size_;
}
