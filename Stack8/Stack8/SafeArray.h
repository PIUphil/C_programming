#pragma once
#include "Array.h"
#include "InvalidIndex.h"

template <typename T>
class SafeArray : public Array<T> {
public:
	//SafeArray();
	explicit SafeArray(int size = Array<T>::ARRAY_SIZE);
	SafeArray(const T* pArr, int size);
	// SafeArray(const SafeArray& rhs);
	// virtual ~SafeArray();
	// SafeArray<T>& operator=(const SafeArray<T>&);

	virtual T& operator[](int index);
	virtual const T& operator[](int index) const;

private:
};


// SafeArray::SafeArray(int size = Array<T>::ARRAY_SIZE) { }

template <typename T>
SafeArray<T>::SafeArray(int size) : Array<T>(size) {}

template <typename T>
SafeArray<T>::SafeArray(const T* pArr, int size) : Array<T>(pArr, size) {}


template <typename T>
T& SafeArray<T>::operator[](int index) {
	if (index < 0 || index >= this->Array<T>::size_)
		throw InvalidIndex(index);
	return this->Array<T>::operator[](index);
}

template <typename T>
const T& SafeArray<T>::operator[](int index) const {
	if (index < 0 || index >= this->Array<T>::size_)
		throw InvalidIndex(index);
	return this->Array<T>::operator[](index);
}