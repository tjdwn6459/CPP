#include <stdio.h>

int main()
{
	const char* str = "Korea";
	int* pi;
	double d = 123.456;
	int i;
	int ary[] = { 1, 2, 3, 4, 5 };
	char aary[] = { 'a', 'b' };
	int* ptr = static_cast<int*>(ary);///�迭�� ��ȯ�� �����ϴ�

	i = static_cast<int>(d); //����
	pi = static_cast<int>(str); //����(�����ʹ� ����ȯ�� �����Ѵ�)
	pi = (int*)str;
}