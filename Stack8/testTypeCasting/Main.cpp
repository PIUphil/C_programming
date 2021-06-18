/*
1. SafeArray ���� SafeArray.cpp ��

SafeArray::SafeArray(const SafeArray& rhs): Array((Array)rhs) {}		// slicing. �θ� ����ȯ..?
										// static_cast(Array)
����ƽĳ��Ʈ�� ����



2. String2 ���� StringRep ��

StringRep::StringRep(const char* s, bool) {
	// str_ = (char*)s;
	str_ = const_cast<char*>(s);



3. String ���� String.cpp ��

String::String(const char* s, bool) {		// ���ɰ����� ���� ����Լ����� ������
	// this->str_ = (char*)s;
	this->str_ = const_cast<char*>s;
	this->len_ = strlen(s);



4.5. Shape ���� Main.cpp ��

// Rectangle* p = (Rectangle*)ps;
const Rectangle* p = dynamic_cast<const Rectangle*> (ps);

// Circle* p = (Circle*)ps;
const Circle* p = dynamic_cast<const Circle*> (ps);

*/

#include <iostream>

int main() {

	int kor = 90;
	int eng = 90;
	int math = 91;

	//double average = (kor + eng + math) / 3;
	//double average = (double)(kor + eng + math) / 3;
	double average = static_cast<double>(kor + eng + math) / 3;

	std::cout << "average : " << average << std::endl;


	int width = 9;
	int height = 5;

	double area = static_cast<double> (width * height) / 2;
	std::cout << "area : " << area << std::endl;


	int man = 10;
	int woman = 1;

	double manRatio = static_cast<double> (man) / (man + woman) * 100;
	double womanRatio = static_cast<double> (woman) / (man + woman) * 100;

	std::cout << "manRatio : " << manRatio << std::endl;
	std::cout << "womanRatio : " << womanRatio << std::endl;


	int a = 0x12345678;
	
	char* p;
	// p = static_cast<char*>(&a);
	p = reinterpret_cast<char*>(&a);
	
	std::cout << "*p : 0x" << std::hex << static_cast<int>(*p) << std::endl;
	
	/* ��¼��� : CPUƯ�� -> ����cpu 78563412 / IBM : 12345678  => ��Ʋ�����, �򿣵�� */
	

	return 0;
}