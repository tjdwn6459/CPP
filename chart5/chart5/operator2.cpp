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
	const MyTest operator+(const MyTest& other)const
	{
		MyTest res;//�׹�° ��ü ������ ȣ��
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;//�������ָ� (�ӽð�ü�� ���������) RES�� ���� ��������� ������ ����
	}

	friend const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2);//Ŭ������ ģ���� ������ (Ŭ�������� �����Լ� ��밡��)->����� �б� ���� 
	//const MyTest& operator=(const MyTest& other)
	//{
	//	//MyTest res;
	//	x = other.x;//<-�Ű������� ������ x���� �����Ѵ� 
	//	y = other.y;
	//	return *this;
	//}
	void printData()
	{
		printf("a : %d, b = %d", x, y);
	}
};

const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2)//-> Ŭ���� �ܺο��� �ۼ�(�μ� 2���� ����)
{
	MyTest res;
	res.x = rhs1.x - rhs2.y;
	res.y = rhs1.y - rhs2.y;

	return res;
}

int main()
{
	MyTest obj1(10, 20);//��ü�� ����
	MyTest obj2(20, 10);//�ι�° ��ü ����
	MyTest obj;//��ü�� ��������鼭 ������ ȣ��

	obj = obj1 + obj2;//=�⺻������ ������ �����ϰԲ� �����Ϸ��� �������ִ°��̴� 
	obj.printData();
	/*obj = obj1.operator=(obj2);*/
	obj = operator-(obj1, obj2);
	obj.printData();



	return 0;
}