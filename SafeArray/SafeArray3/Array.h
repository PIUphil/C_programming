#pragma once
#include <cassert>
#include <cstring>
//#ifndef ARRAY_H
//#define ARRAY_H
#include <iostream>


template <typename T>
class Array {			// 클래스이름, 생성자, 소멸자는 <T>를 안붙임

public:
	//Array<T>* operator&();
	//const Array<T>* operator&() const;

	//Array();
	explicit Array(int size = ARRAY_SIZE);			// explicit : 명시적인	-> 묵시적으로 형변환 되는것을 막음
	Array(const T* pArr, int size);
	Array(const Array<T>& rhs);
	~Array();

	Array<T>& operator=(const Array<T>& rhs);				// deep-copy가 되도록 만들어줌

	bool operator==(const Array<T>& rhs) const;

	T& operator[](int index);
	const T& operator[](int index) const;

	// get
	int size() const;

protected:
	static const int ARRAY_SIZE;				// static 멤버변수 - 클래스와 관련된 전역변수

	int size_;
	T* pArr_;
};

//#endif

template <typename T>
const int Array<T>::ARRAY_SIZE = 100;

template <typename T>
Array<T>::Array(int size) {
	pArr_ = new T[size];
	assert(pArr_);
	size_ = size;
}

template <typename T>
Array<T>::Array(const T* pArr, int size) {
	pArr_ = new T[size];
	assert(pArr_);
	for (int i = 0; i < size; ++i)
		pArr_[i] = pArr[i];
	size_ = size;
}

template <typename T>
Array<T>::Array(const Array<T>& rhs) {
	pArr_ = new T[rhs.size_];
	assert(pArr_);
	for (int i = 0; i < rhs.size_; ++i)
		pArr_[i] = rhs.pArr_[i];
	size_ = rhs.size_;
}

template <typename T>
Array<T>::~Array() {
	delete[] pArr_;
}


template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
	if (this != &rhs) {
		delete[] pArr_;

		pArr_ = new T[rhs.size_];
		assert(pArr_);
		for (int i = 0; i < rhs.size_; ++i)
			pArr_[i] = rhs.pArr_[i];
		size_ = rhs.size_;
	}
	return *this;
}

template <typename T>
bool Array<T>::operator==(const Array<T>& rhs) const {

	if (size_ != rhs.size_)
		return false;

	int i;
	for (i = 0; i < rhs.size_; ++i)
		if (pArr_[i] != rhs.pArr_[i])
			break;

	return (i == rhs.size_);
}


template <typename T>
T& Array<T>::operator[](int index) {
	return pArr_[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const {
	return pArr_[index];
}


template <typename T>
int Array<T>::size() const {
	return size_;
}