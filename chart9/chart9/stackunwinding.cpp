#include <stdio.h>

class C
{
	int a;

public:
	C() { puts("������ ȣ��"); }
	~C() {
		puts("������ ȣ��");
	}
};
void divide(int a, int d)
{
	if (d == 0) throw "0���� ������ �����ϴ�.";
	printf("������ ��� = %d�Դϴ�.", a / d);
}

void calc(int t, const char* m)
{
	C c;
	divide(10, 0);
}
int main()
{
	try {
		calc(1, "���");
	}
	catch (const char* message)
	{
		puts(message);
	}
	puts("���α׷��� ����˴ϴ�.");

}