#include <stdio.h>

class Human //��������� �Լ� �Ѵ� ����
{
public:
	char name[12];
	int age;

	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human kim = { "�����", 29 };//humanŬ�����ȿ� ��ü��kim
	kim.intro();
}