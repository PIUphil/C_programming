#include <cstring>
#include <cassert>
#include "StringRep.h"


void StringRep::init_str(const char* s) {
	if (s) {
		str_ = new char[strlen(s) + 1];
		assert(str_/* != NULL */);
		//strcpy(str_, s);
		strcpy_s(str_, strlen(s) + 1, s);	//strcpy_s - 2��°���ڷ� �������� �߰�
		len_ = strlen(s);
	}
	else {
		str_ = new char[1];					// str_ = new char;
		assert(str_);
		str_[0] = '\0';
		len_ = 0;
	}
}

StringRep::StringRep(const char* s) {
	init_str(s);
}

StringRep::StringRep(const char* s, bool) {
	// str_ = (char*)s;
	str_ = const_cast<char*>(s);
	len_ = strlen(s);
}