#include<stdio.h>

//������ ���� ����ó��(��Ȯ�ϰ� Ÿ���� ��������� �Ѵ�)
int main()
{
	int a, b;

	try {
		printf("�������� ���� �Է��ϼ��� .");
		scanf_s("%d", &a);
		if (a < 0) throw a;
		printf("������ ���� �Է��Ͻÿ� : ");
		scanf_s("%d", &b);
		if (b == 0) throw "0���δ� ���� �� �����ϴ�.";//���ڿ��� handler�� ������ 
		printf("������ ����� %d�Դϴ�.\n", a / b);

	}
	catch (int a)//���� Ÿ�� ���� �� �ְ� �������ش� 
	{
		printf("%d�� �����̹Ƿ� ������ �ź�\n", a);
	}
	catch (const char* message)//���ڿ��� �޴´�
	{
		puts(message);
	}

}