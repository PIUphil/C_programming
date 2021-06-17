//#include <cassert>
#include "InvalidIndex.h"
#include "SafeArray.h"

// SafeArray::SafeArray(int size = Array::ARRAY_SIZE) { }

SafeArray::SafeArray(int size): Array(size) {}

SafeArray::SafeArray(const int* pArr, int size): Array(pArr, size) {}

// SafeArray::SafeArray(const SafeArray& rhs): Array((Array)rhs) {}		// slicing. 부모꺼 형변환..?

// SafeArray::~SafeArray() {}


int& SafeArray::operator[](int index) {
	// assert(index >= 0 && index < this->Array::size_);
	//throw 1;			// 범위를 벗어났을 때. 1을 던짐....(그냥 정해준거임)
	throw InvalidIndex(index);
	return this->Array::operator[](index);
}
const int& SafeArray::operator[](int index) const {
	//assert(index >= 0 && index < this->Array::size_);
	//throw 1;
	throw InvalidIndex(index);
	return this->Array::operator[](index);
}
