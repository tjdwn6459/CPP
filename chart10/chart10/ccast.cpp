#include <stdio.h>

int mian()
{

	const char* str = "Korea";
	int* pi;

	pi = (int*)str;//����ȯ
	printf("%d %x\n", *pi, *pi);
}