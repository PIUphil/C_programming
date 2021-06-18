#include <cstring>
#include <cassert>
#include "String.h"
//#pragma warning(disable:4996)
#include <iostream>

std::ostream& operator<<(std::ostream& out, const String& rhs) {
	return out << rhs.c_str();
}


String::String(const char* s, bool) {		// 성능개선을 위한 멤버함수전용 생성자
	ptr_ = new StringRep(s, true);
	ptr_->rc_ = 1;
}

String::String(const char* s) {
	ptr_ = new StringRep(s);
	ptr_->rc_ = 1;
}

String::String(const String& rhs) {
	ptr_ = rhs.ptr_;					// shallow-copy
	++ptr_->rc_;
}

String::~String() {
	--ptr_->rc_;
	if (ptr_->rc_ == 0)
		delete ptr_;
}


String& String::operator=(const String& rhs) {
	if (this != &rhs) {				// self-assignment test!	// s1=s1 자기자신 치환할땐 안되도록

		--ptr_->rc_;				// 소멸자code
		if (ptr_->rc_ == 0)
			delete ptr_;

		ptr_ = rhs.ptr_;			// 복사생성자code
		++ptr_->rc_;
	}
	return *this;
}

String& String::operator=(const char* str) {
	if (str != c_str()) {
		--ptr_->rc_;				// 소멸자code
		if (ptr_->rc_ == 0)
			delete ptr_;

		ptr_ = new StringRep(str);
		ptr_->rc_ = 1;

	}
	return *this;
}

bool String::operator==(const String& rhs) const {
	return strcmp(this->ptr_->str_, rhs.ptr_->str_) == 0;
}

const String String::operator+(const String& rhs) const {

	char* buf = new char[ptr_->len_ + rhs.ptr_->len_ + 1];
	assert(buf);

	strcpy_s(buf, ptr_->len_ + 1, ptr_->str_);
	strcat_s(buf, ptr_->len_ + rhs.ptr_->len_ + 1, rhs.ptr_->str_);

	// String result(buf);
	String result(buf, true);
	// delete[] buf;

	return result;
}


char& String::operator[](int index) {
	return ptr_->str_[index];
}

const char& String::operator[](int index) const {
	return ptr_->str_[index];
}


const char* String::c_str() const {
	return ptr_->str_;
}
int String::size() const {
	return ptr_->len_;
}