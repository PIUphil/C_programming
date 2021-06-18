#pragma once

class StringRep {

friend class String;			// String안에있는 멤버함수는 StringRep의 멤버변수에 접근가능 - 핸들 바디 클래스

public:

private:
	char* str_;
	int len_;
	int rc_;					// reference count

	void init_str(const char* s);		// helper func.
	
	StringRep(const char* s = 0);
	StringRep(const char* s, bool);
};