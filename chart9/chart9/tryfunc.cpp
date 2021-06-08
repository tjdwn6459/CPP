#include <stdio.h>

void dividde (int a, int b)
try {
	if (b == 0) throw "0으로 나눌 수 없습니다.";
	printf("나누기 결과 = %d입니다.", a / b);
}
catch (const char* message) {
	puts(message);
}
int main()
{


	dividde(10, 0);
}