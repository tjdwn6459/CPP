#include <stdio.h>

void divide(int a, int d)
{
	if (d == 0) throw "0���� ���� �� �����ϴ�.\n ";
	printf("������ ��� = %d�Դϴ�\n", a / d);
}
int main()
{

	try {
		divide(2, 0);//�μ��� ����(d=0�̶� ���ڿ��� �����ش�)
	}
	catch (const char* message)
	{
		puts(message);//(���� ���ڿ�)�� ���
	}
	divide(10, 5);//�μ� ���� �Լ� ���� (���)
}