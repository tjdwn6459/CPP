//정수형 변수 sum에 124, num 5 가 있을때 두 수흫 나누어 평균을 구해 출력하되 소수점 이하 까지 정밀하게 계산
#include <stdio.h>

int main()
{
	int sum = 124, num = 5;
	printf("평균 : %f\n", static_cast<double>(sum) / num);

	return 0;
}