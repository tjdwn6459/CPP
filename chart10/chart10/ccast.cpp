#include <stdio.h>

int mian()
{

	const char* str = "Korea";
	int* pi;

	pi = (int*)str;//Çüº¯È¯
	printf("%d %x\n", *pi, *pi);
}