#include <stdio.h>

int main()
{
	const char* str = "Korea";
	int* pi;
	double d = 123.456;
	int i;
	int ary[] = { 1, 2, 3, 4, 5 };
	char aary[] = { 'a', 'b' };
	int* ptr = static_cast<int*>(ary);///배열은 변환이 가능하다

	i = static_cast<int>(d); //가능
	pi = static_cast<int>(str); //에러(포인터는 형변환은 불허한다)
	pi = (int*)str;
}