int a;
int b;

a = 0;
b = a;

if (a == b) {

}


int a;
int b;

memset(&a, 0, sizeof(int)) // a = 0;
memcpy(&b, &a, sizeof(int))  // b = a;

//if (a == b) { }
if (memcmp(&a, &b, sizeof(int)) == 0) { }





double d;
double f;

memset(&d, 0, sizeof(double)// d = 0.0;
memcpy(&f, &d, sizeof(double)// f = d;

//if (d == f) { }
if (memcmp(&d, &f, sizeof(double))==0)






void* p;
int a;
a = 100;
p = &a;			// void* (���̵�������)  int*
*p = 200;		// void*�� ������ �ȵ�,,,		// *(int*)p	   Ÿ��ĳ���� �� ������
// a


void* p;
double d;
d = 3.14;
p = &d;
*p = 2.718;		// *(double*)p
// d