#include <iostream>
#include "Empty.h"

int main() {

	Empty e1;
	Empty e2 = e1;		// Empty e2(e1);
	const Empty e3 = e1;

	e2 = e1;			// e2.operator=(e1);	// ġȯ����

	Empty *pe = &e1;	// e1.operator&();		// ������
	const Empty* pe2 = &e3;		// �����ü�� �ּ�
	

	return 0;
}