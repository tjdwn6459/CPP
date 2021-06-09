#include <stdio.h>

class SomeClass{};

void calc()throw(int)
{
	SomeClass odj;
	char* p = new char[1000];

	if (true)throw 1;
	delete[]p;
}
int mian()
{
	try {
		calc();
	}
	catch (int)
	{
		puts("정수형 예외 발생");
	}
}