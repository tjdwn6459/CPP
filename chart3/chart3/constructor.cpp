#include <stdio.h>
#include <string.h>
#define CRT_SECURE_NO_WARNINGS

class Human
{
private:
	char name[12];
	int age;
public://������ 
	Human(const char* aname, int aage)//����Ҷ� , �޸� �����Ҵ�
	{
		strcpy_s(name, aname); // name�� aname�� ���ڿ��� ���� (private�� ������ �ٷ� ������ ���ϴϱ�)
		age = aage;//age�� aage�� ���� ����
	}

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human kim("�����", 29); /*Human kim = Human("�����", 29)*///humanŬ������ �ν��Ͻ� kim ���� �ϰ� �ڵ����� ������ ȣ��
	kim.intro();//�Լ� ȣ�� 

}