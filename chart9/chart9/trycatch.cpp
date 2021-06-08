#include<stdio.h>

//나누기 연산 예외처리(정확하게 타입을 지정해줘야 한다)
int main()
{
	int a, b;

	try {
		printf("나누어질 수를 입력하세요 .");
		scanf_s("%d", &a);
		if (a < 0) throw a;
		printf("나누는 수를 입력하시오 : ");
		scanf_s("%d", &b);
		if (b == 0) throw "0으로는 나눌 수 없습니다.";//문자열을 handler에 던진다 
		printf("나누기 결과는 %d입니다.\n", a / b);

	}
	catch (int a)//동일 타입 받을 수 있게 지정해준다 
	{
		printf("%d는 음수이므로 나누기 거부\n", a);
	}
	catch (const char* message)//문자열을 받는다
	{
		puts(message);
	}

}