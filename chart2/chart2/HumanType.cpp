#include <stdio.h>

class Human
{
public:
	char name[12];
	int age;

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{

	Human arFriend[10] = {//human�̶�� class�� ��üarfriend �迭
		{"������", 49},
		{"������", 49},
		{"�ڻ�", 49}
	};

	Human* pFriend;
	pFriend = &arFriend[1];//1������ �ּڰ��� ����Ų�� 
	pFriend->intro(); //�����ͷ� ����Լ� ȣ�� ->


}