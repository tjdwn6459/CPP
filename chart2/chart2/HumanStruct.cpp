#include <stdio.h>

struct Human //����ü ����
{
	char name[20]; //��� ����
	int age;
};

void intro(Human who) //����ü�� ����� ���� ��ü who �Է�����
{
	printf("�̸� = %s, ���� = %d", who.name, who.age);
}
int main()
{

	Human kim = { "�����", 29 };
	intro(kim);//�Լ��� kim�� ������ ȣ���Ѵ� 
}