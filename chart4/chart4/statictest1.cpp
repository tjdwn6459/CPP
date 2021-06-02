#include <iostream>

class StaticTest {
	static int a;
	int b;

public:
	StaticTest();
	static void setData(int); //static ��� �Լ��� static��������� ����Ѵ�
	void getData();
};
int StaticTest::a = 10; //static ������� �ʱ�ȭ
{
	b = 20;
}


StaticTest::StaticTest()
{
	b = 20;
}

void StaticTest::getData()
{
	printf("a : %d\n, b : %d\n", a,b);
}
void StaticTest::setData(int aa)
{
	a = aa;//�����͸� ����� �� ���� (�� ��ü ���� �ƴϴ�)
}

int main()
{
	StaticTest s1;
	s1.getData();
	StaticTest s2;
	s2.getData();


	s1.setData(30);
	s1.getData();
	s2.getData();

	StaticTest::setData(40);//Ŭ���� �Ҽ����� Ŭ���� ȣ���� �����ϴ� 
	s1.getData();
	s2.setData();

	return 0;

}
