#include <iostream>

struct Human //����ü�� ��� ���� �����ڰ� public
{
	char name[20];
	float height;
	float weight;
	int age;
	char blood;
	void view();//�Լ��� ������ Ŭ���� ���ο� ��ġ�Ѵ�

};

void Human::view()//���ο� �ִ� �� ������ �������� ->���� ���� �����ڸ� ����ؿ� Ŭ������ �Ҽӵ��� �� �� �ִ� 
{
	printf("���� �̸��� %s �̰� Ű�� %f�̰� �����Դ� %f�̰� ���̴� %d �̰� �������� %c�Դϴ�.", name, height, weight, age, blood);
}

int main()
{

	Human my = { "ȫ�浿", 182, 78, 40, 'B' };
	my.view();
	return  0;
}