#include <stdio.h>

class Human
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
	Human kim = { "�����", 29 };
	kim.intro();
}