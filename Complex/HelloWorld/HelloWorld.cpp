#include <iostream>
using std::cout;
using std::endl;

int main() {

	cout << "hello, world" << endl;

	// cout << "hello, world";
	// cout.operator << ("hello, world");	//����Լ����� -> ���ڿ��� �ּҰ��� ��µ�
	operator<<(cout, "hello, world");		//�����Լ�����		�� �� �ϳ��� �ٲ�..
	
	// cout << endl;
	cout.operator<<(endl); 
	//operator<<(cout, endl);				// �ȵ�

	operator<<(cout, "hello, world").operator<<(endl);		// cout << "hello, world" << endl; �� ����


	return 0;
}