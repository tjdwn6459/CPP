#include <iostream>

class MyTest {

private:
	int x;
	int y;

public:

	MyTest(int a = 0, int b = 0) {//���޹��� �μ��� ���� �ֱ� 
		x = a;
		y = b;

		printf("�μ� 2�� ������!! \n");
	}

	MyTest(MyTest& rhs) : x(rhs.x), y(rhs.y) {
		printf("���� ������ ȣ�� !!");
	}
	//sum�̶�� ��� �Լ� ����� 
	const MyTest& operator+(const MyTest&other)const
	{
		MyTest res;//�׹�° ��ü ������ ȣ��
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;//�������ָ� (�ӽð�ü�� ���������) RES�� ���� ��������� ������ ����
	}

	void printData()
	{
		printf("a : %d, b = %d", x, y);
	}
};


int main()
{
	MyTest obj1(10, 20);//��ü�� ����
	MyTest obj2(20, 10);//�ι�° ��ü ����
	MyTest obj;//��ü�� ��������鼭 ������ ȣ��

	obj = obj1 + obj2;
	obj.printData();

	

	return 0;
}