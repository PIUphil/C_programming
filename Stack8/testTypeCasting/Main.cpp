/*
1. SafeArray 에서 SafeArray.cpp 중

SafeArray::SafeArray(const SafeArray& rhs): Array((Array)rhs) {}		// slicing. 부모꺼 형변환..?
										// static_cast(Array)
스태틱캐스트가 쓰임



2. String2 에서 StringRep 중

StringRep::StringRep(const char* s, bool) {
	// str_ = (char*)s;
	str_ = const_cast<char*>(s);



3. String 에서 String.cpp 중

String::String(const char* s, bool) {		// 성능개선을 위한 멤버함수전용 생성자
	// this->str_ = (char*)s;
	this->str_ = const_cast<char*>s;
	this->len_ = strlen(s);



4.5. Shape 에서 Main.cpp 중

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
	
	/* 출력순서 : CPU특성 -> 인텔cpu 78563412 / IBM : 12345678  => 리틀엔디안, 빅엔디안 */
	

	return 0;
}