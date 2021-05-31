#include<stdio.h>

void sub(int a) { printf("int : %d\n", a); }
void sub(int *a){printf("pointer: %p\n, a"); }

int main()
{
	int i = 1234, * pi = &i;

	sub(i);
	sub(pi);
	sub(NULL); //주솟값을 가진다 (정수값은 0이다)


}