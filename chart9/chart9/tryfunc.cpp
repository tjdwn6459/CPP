#include <stdio.h>

void dividde (int a, int b)
try {
	if (b == 0) throw "0���� ���� �� �����ϴ�.";
	printf("������ ��� = %d�Դϴ�.", a / b);
}
catch (const char* message) {
	puts(message);
}
int main()
{


	dividde(10, 0);
}