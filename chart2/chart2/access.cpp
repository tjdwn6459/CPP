#include <stdio.h>

struct SHuman
{
private:
	char name[12];
	int age;

public://���

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	SHuman kim;//kim�̶�� ��ü ����
	//kim.age = 26 �ܺο��� ��� ������ �о�� �� ����
	kim.intro();


}