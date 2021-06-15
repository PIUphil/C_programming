swap(a, b);
void swap(int &ra, int&rb) 
{
	int tmp = ra;
	ra = rb;
	rb = tmp;
}