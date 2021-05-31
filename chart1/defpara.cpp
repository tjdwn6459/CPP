#include <stdio.h>

int GetSum(int form, int to, int step = 1, int base = 0);//맨뒤에서 역순으로default매개변수를 만들어야 한다 (초기값을 가진다)

int main()
{
	printf("%d\n", GetSum(1, 10));//실인수 2개를전달1 ->from 10 ->to
	printf("%d\n", GetSum(1, 10, 2));//실인수 3개의형태 호출 2-> step으로 되며 원래 초깃값은 적용을 안받는다 
	printf("%d\n", GetSum(1, 10, 2, 10));



}

int GetSum(int from, int to, int step/* = 1*/, int base/*0*/)
{
	int sum = base;

	for (int i = from; i <= to; i += step)
	{
		sum += i;
	}

	return sum;
}