#include <stdio.h>

int GetSum(int form, int to, int step = 1, int base = 0);//�ǵڿ��� ��������default�Ű������� ������ �Ѵ� (�ʱⰪ�� ������)

int main()
{
	printf("%d\n", GetSum(1, 10));//���μ� 2��������1 ->from 10 ->to
	printf("%d\n", GetSum(1, 10, 2));//���μ� 3�������� ȣ�� 2-> step���� �Ǹ� ���� �ʱ갪�� ������ �ȹ޴´� 
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