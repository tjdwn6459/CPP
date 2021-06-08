#include <stdio.h>

void divide(int a, int d)
{
	if (d == 0) throw "0으로 나눌 수 없습니다.\n ";
	printf("나누기 결과 = %d입니다\n", a / d);
}
int main()
{

	try {
		divide(2, 0);//인수를 전달(d=0이라 문자열을 던저준다)
	}
	catch (const char* message)
	{
		puts(message);//(받은 문자열)을 출력
	}
	divide(10, 5);//인수 전달 함수 실행 (출력)
}