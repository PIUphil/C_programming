#pragma once

class StringRep {

friend class String;			// String�ȿ��ִ� ����Լ��� StringRep�� ��������� ���ٰ��� - �ڵ� �ٵ� Ŭ����

public:

private:
	char* str_;
	int len_;
	int rc_;					// reference count

	void init_str(const char* s);		// helper func.
	
	StringRep(const char* s = 0);
	StringRep(const char* s, bool);
};