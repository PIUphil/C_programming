#include <cstring>
#include <cassert>
#include "String.h"
//#pragma warning(disable:4996)


std::ostream& operator<<(std::ostream& out, const String& rhs) {
	return out << rhs.str_;
}

void String::init_str(const char* s) {
	if (s) {
		str_ = new char[strlen(s) + 1];
		assert(str_/* != NULL */);
		//strcpy(str_, s);
		strcpy_s(str_, strlen(s) + 1, s);	//strcpy_s - 2번째인자로 길이정보 추가
		len_ = strlen(s);
	}
	else {
		str_ = new char[1];					// str_ = new char;
		assert(str_);
		str_[0] = '\0';
		len_ = 0;
	}
}


/*String::String() {
	str_ = new char[1];
	assert(str_);
	str_[0] = '\0';
	len_ = 0;
}*/

String::String(const char* s, bool) {		// 성능개선을 위한 멤버함수전용 생성자
	this->str_ = (char*)s;
	this->len_ = strlen(s);
}

String::String(const char* s) {
	init_str(s);
}

String::String(const String& rhs) {
	/*str_ = new char[rhs.len_ + 1];
	assert(str_);
	//strcpy(str_, rhs.str_);				// deep-copy	공간할당하고 내용복사
	strcpy_s(str_, rhs.len_ + 1, rhs.str_);			
	len_ = rhs.len_;*/
	init_str(rhs.str_);
}

String::~String() {
	delete[] str_;					// delete str_;
}


String& String::operator=(const String& rhs) {
	if (this != &rhs) {				// self-assignment test!	// s1=s1 자기자신 치환할땐 안되도록
		delete[] str_;
		/*str_ = new char[rhs.len_ + 1];
		assert(str_);
		strcpy_s(str_, rhs.len_ + 1, rhs.str_);
		len_ = rhs.len_;*/
		init_str(rhs.str_);

		return *this;
	}
}

String& String::operator=(const char* str) {
	if (str != c_str()) {
		delete[] str_;

		init_str(str);
	}
	return *this;
}

bool String::operator==(const String& rhs) const {
	return strcmp(str_, rhs.str_) == 0;
}

const String String::operator+(const String& rhs) const {
	char* buf = new char[len_ + rhs.len_ + 1];
	assert(buf);
	strcpy_s(buf, len_ + 1, str_);
	strcat_s(buf, len_ + rhs.len_ + 1, rhs.str_);

	// String result(buf);
	String result(buf, true);
	// delete[] buf;

	return result;
}


char& String::operator[](int index) {
	return str_[index];
}

const char& String::operator[](int index) const {
	return str_[index];
}


const char* String::c_str() const {
	return str_;
}
int String::size() const {
	return len_;
}